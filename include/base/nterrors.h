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

/* DO NOT EDIT THIS FILE - it is automatically generated */

typedef struct _NtError {
	int ErrorNumber;
	char *ErrorString;
	struct _NtError *next;
} NtError;

NtError NtErrorStrings[] = {
{ 10004 , "WSAEINTR" },
{ 10009 , "WSAEBADF" },
{ 10013 , "WSAEACCES" },
{ 10014 , "WSAEFAULT" },
{ 10022 , "WSAEINVAL" },
{ 10024 , "WSAEMFILE" },
{ 10035 , "WSAEWOULDBLOCK" },
{ 10036 , "WSAEINPROGRESS" },
{ 10037 , "WSAEALREADY" },
{ 10038 , "WSAENOTSOCK" },
{ 10039 , "WSAEDESTADDRREQ" },
{ 10040 , "WSAEMSGSIZE" },
{ 10041 , "WSAEPROTOTYPE" },
{ 10042 , "WSAENOPROTOOPT" },
{ 10043 , "WSAEPROTONOSUPPORT" },
{ 10044 , "WSAESOCKTNOSUPPORT" },
{ 10045 , "WSAEOPNOTSUPP" },
{ 10046 , "WSAEPFNOSUPPORT" },
{ 10047 , "WSAEAFNOSUPPORT" },
{ 10048 , "WSAEADDRINUSE" },
{ 10049 , "WSAEADDRNOTAVAIL" },
{ 10050 , "WSAENETDOWN" },
{ 10051 , "WSAENETUNREACH" },
{ 10052 , "WSAENETRESET" },
{ 10053 , "WSAECONNABORTED" },
{ 10054 , "WSAECONNRESET" },
{ 10055 , "WSAENOBUFS" },
{ 10056 , "WSAEISCONN" },
{ 10057 , "WSAENOTCONN" },
{ 10058 , "WSAESHUTDOWN" },
{ 10059 , "WSAETOOMANYREFS" },
{ 10060 , "WSAETIMEDOUT" },
{ 10061 , "WSAECONNREFUSED" },
{ 10062 , "WSAELOOP" },
{ 10063 , "WSAENAMETOOLONG" },
{ 10064 , "WSAEHOSTDOWN" },
{ 10065 , "WSAEHOSTUNREACH" },
{ 10066 , "WSAENOTEMPTY" },
{ 10067 , "WSAEPROCLIM" },
{ 10068 , "WSAEUSERS" },
{ 10069 , "WSAEDQUOT" },
{ 10070 , "WSAESTALE" },
{ 10071 , "WSAEREMOTE" },
{ 10101 , "WSAEDISCON" },
{ 10091 , "WSASYSNOTREADY" },
{ 10092 , "WSAVERNOTSUPPORTED" },
{ 10093 , "WSANOTINITIALISED" },
{ 11001 , "WSAHOST_NOT_FOUND" },
{ 11002 , "WSATRY_AGAIN" },
{ 11003 , "WSANO_RECOVERY" },
{ 11004 , "WSANO_DATA" },
{ 0, NULL }
};
