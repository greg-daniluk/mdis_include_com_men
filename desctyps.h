/***********************  I n c l u d e  -  F i l e  ************************
 *  
 *         Name: desctyps.h
 *
 *       Author: see
 *        $Date: 1998/05/29 16:49:04 $
 *    $Revision: 1.2 $
 * 
 *  Description: Descriptor key types
 *                      
 *     Switches: -
 *
 *-------------------------------[ History ]---------------------------------
 *
 * $Log: desctyps.h,v $
 * Revision 1.2  1998/05/29 16:49:04  see
 * missing header/ifdefs added
 *
 *---------------------------------------------------------------------------
 * (c) Copyright 1998 by MEN mikro elektronik GmbH, Nuremberg, Germany 
 ******************************************************************************/
/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _DESCTYPS_H
#define _DESCTYPS_H

#ifdef __cplusplus
	extern "C" {
#endif

/*--------------------------------------+
|   DEFINES                             |
+--------------------------------------*/
/* keys: all keys begin with 0x6d */
#define DESC_BINARY			0x6d01
#define DESC_U_INT32		0x6d02
#define DESC_STRING			0x6d03
#define DESC_DIR			0x6d64
#define DESC_END			0x6d65

#ifdef __cplusplus
	}
#endif

#endif	/* _DESCTYPS_H */

