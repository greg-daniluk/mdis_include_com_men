/***********************  I n c l u d e  -  F i l e  ************************
 *  
 *         Name: bb_isa.h
 *
 *       Author: ds
 *        $Date: 2004/09/06 13:03:13 $
 *    $Revision: 2.2 $
 * 
 *  Description: Header file for ISA BBIS driver
 *               - ISA specific status codes
 *               - ISA function prototypes
 *
 *     Switches: _ONE_NAMESPACE_PER_DRIVER_
 *               _LL_DRV_
 *
 *-------------------------------[ History ]---------------------------------
 *
 * $Log: bb_isa.h,v $
 * Revision 2.2  2004/09/06 13:03:13  dpfeuffer
 * ISA_IO_GetEntry() prototype added
 *
 * Revision 2.1  2000/02/28 14:19:37  Schmidt
 * Initial Revision
 *
 *---------------------------------------------------------------------------
 * (c) Copyright 2000 by MEN mikro elektronik GmbH, Nuremberg, Germany 
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

#ifndef _BB_ISA_H_
#define _BB_ISA_H_

#ifdef __cplusplus
	extern "C" {
#endif

/*---------------------------------------------------------------------------+
|    DEFINES                                                                 |
+---------------------------------------------------------------------------*/
/* ISA specific status codes (STD) */		/* S,G: S=setstat, G=getstat */
/*#define ISA_XXX		M_BRD_OF+0x00*/		/* G,S: xxx */
/* none */

/* ISA specific status codes (BLK)*/			/* S,G: S=setstat, G=getstat */
/*#define ISA_XXX		M_BRD_BLK_OF+0x00*/	/* G,S: xxx */
/* none */

/*---------------------------------------------------------------------------+
|    PROTOTYPES                                                              |
+---------------------------------------------------------------------------*/
#ifndef _ONE_NAMESPACE_PER_DRIVER_
extern void ISA_GetEntry( BBIS_ENTRY* bbisP );
extern void ISA_IO_GetEntry( BBIS_ENTRY* bbisP );
#endif /* _ONE_NAMESPACE_PER_DRIVER_ */

#ifdef __cplusplus
	}
#endif

#endif /* _BB_ISA_H_ */


