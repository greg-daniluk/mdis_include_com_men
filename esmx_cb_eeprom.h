/***********************  I n c l u d e  -  F i l e  ************************
 *
 *         Name: esmx_cb_eeprom.h
 *
 *       Author: rt
 *        $Date: 2008/08/04 14:10:16 $
 *    $Revision: 3.1 $
 *
 *  Description: Layout of ESMexpress carrier board's serial EEPROM
 *
 *     Switches: -
 *
 *-------------------------------[ History ]---------------------------------
 *
 * $Log: esmx_cb_eeprom.h,v $
 * Revision 3.1  2008/08/04 14:10:16  rt
 * Initial Revision
 *
 *
 * cloned from esm_cb_eeprom.h (Revision 3.2  2007/07/11 14:37:54)
 *---------------------------------------------------------------------------
 * (c) Copyright 2008 by MEN Mikro Elektronik GmbH, Nuremberg, Germany
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
#ifndef _ESMX_CB_EEPROM_H
#define _ESMX_CB_EEPROM_H

#include <MEN/eeprod.h>

#define ESMX_CB_EEPROM_SIZE 256

/* the entire structure covers 0x100 Byte (256 Byte) */
typedef struct {
    /*--- offset 0x0: production data, hardware information (24 byte) ---*/
	EEPROD2 pd;

    /*--- offset 0x18: reserved for more parameters ---*/
	u_int8	resvd[0x80-24];

	/*--- offset 0x80:  Available to user ---*/
    u_int8 	user[0x80];

} ESMX_CB_EEPROM;

#endif /* _ESMX_CB_EEPROM_H */


