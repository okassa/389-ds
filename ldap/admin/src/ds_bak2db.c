/** BEGIN COPYRIGHT BLOCK
 * This Program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation; version 2 of the License.
 * 
 * This Program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along with
 * this Program; if not, write to the Free Software Foundation, Inc., 59 Temple
 * Place, Suite 330, Boston, MA 02111-1307 USA.
 * 
 * In addition, as a special exception, Red Hat, Inc. gives You the additional
 * right to link the code of this Program with code not covered under the GNU
 * General Public License ("Non-GPL Code") and to distribute linked combinations
 * including the two, subject to the limitations in this paragraph. Non-GPL Code
 * permitted under this exception must only link to the code of this Program
 * through those well defined interfaces identified in the file named EXCEPTION
 * found in the source code files (the "Approved Interfaces"). The files of
 * Non-GPL Code may instantiate templates or use macros or inline functions from
 * the Approved Interfaces without causing the resulting work to be covered by
 * the GNU General Public License. Only Red Hat, Inc. may make changes or
 * additions to the list of Approved Interfaces. You must obey the GNU General
 * Public License in all respects for all of the Program code and other code used
 * in conjunction with the Program except the Non-GPL Code covered by this
 * exception. If you modify this file, you may extend this exception to your
 * version of the file, but you are not obligated to do so. If you do not wish to
 * provide this exception without modification, you must delete this exception
 * statement from your version and license this file solely under the GPL without
 * exception. 
 * 
 * 
 * Copyright (C) 2001 Sun Microsystems, Inc. Used by permission.
 * Copyright (C) 2005 Red Hat, Inc.
 * All rights reserved.
 * END COPYRIGHT BLOCK **/

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

/*
 * Restores a database.
 * 
 * Anil Bhavnani
 * Removed all HTML output for DS 4.0: Rob Weltman
 */

#include <stdio.h>
#include <stdlib.h>
#include "libadminutil/admutil.h"
#include "dsalib.h"
#include "init_ds_env.h"
#include <string.h>

int main(int argc, char *argv[])
{
    int isrunning;
    char *filename = NULL;
	int status;

    fprintf(stdout, "Content-type: text/html\n\n");

	if ( init_ds_env() )
		return 1;

	/*
	 * Get value of the "filename" variable.
	 */
	filename = ds_get_cgi_var("filename");
	if ( (NULL == filename) || (strlen(filename) < 1) ) {
		fprintf(stdout, "Environment variable filename not defined.\n");
		rpt_err( DS_UNDEFINED_VARIABLE, "filename", NULL, NULL );
		return 1;
	}

	/* Check if server is up */
    isrunning = ds_get_updown_status();

	/* Stop it, if so */
	if (isrunning != DS_SERVER_DOWN) {
		status = ds_bring_down_server();
		if(status != DS_SERVER_DOWN)  {
			rpt_err( DS_SERVER_MUST_BE_DOWN, filename, NULL, NULL );
			return 1;
		}
	}

    ds_send_status("restoring database ...");
	status = ds_bak2db(filename);

	if ( !status ) {
		rpt_success("Success! The database has been restored.");
		status = 0;
	} else {
		rpt_err( status, filename, NULL,  NULL );
		status = 1;
	}

	/* Restart the server if we brought it down */
	if (isrunning != DS_SERVER_DOWN) {
		if(ds_bring_up_server(1) != DS_SERVER_UP)  {
			ds_send_status( "An error occurred during startup" );
		}
	}
	return status;
}
