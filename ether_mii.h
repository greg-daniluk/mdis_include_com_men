/***********************  I n c l u d e  -  F i l e  ************************
 *
 *         Name: ether_mii.h
 *
 *       Author: uf
 *        $Date: 2008/12/18 11:04:20 $
 *    $Revision: 2.7 $
 *
 *  Description: MII definitions for Ethernet PHY's
 *     Switches: -
 *-------------------------------[ History ]---------------------------------
 *
 * $Log: ether_mii.h,v $
 * Revision 2.7  2008/12/18 11:04:20  cs
 * R: 1. some defines for MII_ANEG_LINK register and
 *         Marvel 88E1145 PHY where missing
 * M: 1. added missing defines
 *
 * Revision 2.6  2007/07/11 14:38:39  rt
 * added:
 * - ETHER_MII_MAR_88E1145_1000T_CTRL
 * - ETHER_MII_MAR_88E1145_EXT_ADDR
 *
 * Revision 2.5  2005/07/05 12:28:39  kp
 * added more regs for marvell 88E1145
 *
 * Revision 2.4  2005/06/23 16:11:18  kp
 * Copyright line changed (sbo)
 *
 * Revision 2.3  2005/02/08 13:04:51  ufranke
 * added
 *  + ETHER_MII_CONTROL_SPEED_SEL_1000
 *
 * Revision 2.2  2004/11/29 10:46:11  kp
 * added more defs
 *
 * Revision 2.1  2001/10/23 14:22:52  Franke
 * Initial Revision
 *
 *---------------------------------------------------------------------------
 * (c) Copyright 2001 by MEN Mikro Elektronik GmbH, Nuremberg, Germany
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
#ifndef _ETHER_MII_H
#  define _ETHER_MII_H

#  ifdef __cplusplus
      extern "C" {
#  endif

/*-----------------------------------------+
|  TYPEDEFS                                |
+------------------------------------------*/
/*-----------------------------------------+
|  DEFINES & CONST                         |
+------------------------------------------*/

/* ============ MII common registers ===============  */

#define	ETHER_MII_CONTROL				0x00
#define	ETHER_MII_STATUS				0x01
#define	ETHER_MII_PHY_ID_1				0x02
#define	ETHER_MII_PHY_ID_2				0x03
#define	ETHER_MII_ANEG_ADV				0x04
#define	ETHER_MII_ANEG_LINK				0x05
#define	ETHER_MII_ANEG_EXPAN			0x06
#define	ETHER_MII_NEXT_PAGE_ADV			0x07


#define	ETHER_MII_CONTROL_PHY_RESET		0x8000
#define	ETHER_MII_CONTROL_LOOPBACK 		0x4000
#define	ETHER_MII_CONTROL_SPEED_SEL_100	0x2000
#define	ETHER_MII_CONTROL_ANEG_EN  		0x1000
#define	ETHER_MII_CONTROL_POWER_DOWN	0x0800
#define	ETHER_MII_CONTROL_ISOLATE  		0x0400
#define	ETHER_MII_CONTROL_RESTART_ANEG	0x0200
#define	ETHER_MII_CONTROL_FULL_DUPLEX	0x0100
#define	ETHER_MII_CONTROL_SPEED_SEL_1000	0x0040
#define	ETHER_MII_CONTROL_SPEED_SEL_EXT	(ETHER_MII_CONTROL_SPEED_SEL_100 | ETHER_MII_CONTROL_SPEED_SEL_1000)


#define	ETHER_MII_STATUS_100_BASE_T4		0x8000
#define	ETHER_MII_STATUS_100_BASE_FD		0x4000
#define	ETHER_MII_STATUS_100_BASE_HD		0x2000
#define	ETHER_MII_STATUS_10_BASE_FD			0x1000
#define	ETHER_MII_STATUS_MANAG_FRAME_SUP	0x0040
#define	ETHER_MII_STATUS_ANEG_COMPLETE	  	0x0020
#define	ETHER_MII_STATUS_REMOTE_FAULT		0x0010
#define	ETHER_MII_STATUS_ANEG_ABLE 			0x0008
#define	ETHER_MII_STATUS_LINK     			0x0004
#define	ETHER_MII_STATUS_JABBER     	 	0x0002
#define	ETHER_MII_STATUS_EXT_CAP    		0x0001

#define	ETHER_MII_ANEG_LINK_100TX_FD		0x0100
#define	ETHER_MII_ANEG_LINK_100TX_HD		0x0080
#define	ETHER_MII_ANEG_LINK_10TX_FD			0x0040
#define	ETHER_MII_ANEG_LINK_10TX_HD			0x0020


/* ============ OUI codes coded in PHY_ID_1/2 ============  */
#define	ETHER_MII_OUI_MARVELL				0x005043

/* ============ device special registers ============  */
#define	ETHER_MII_AMD_79C874_MISC_FEATURE	0x16
#define	ETHER_MII_AMD_79C874_IRQ_CSR		0x17
#define	ETHER_MII_AMD_79C874_DIAG			0x18
#define	ETHER_MII_AMD_79C874_POW_LOOPBACK	0x19
#define	ETHER_MII_AMD_79C874_MODE_CTRL		0x21
#define	ETHER_MII_AMD_79C874_DISCONNECT		0x23
#define	ETHER_MII_AMD_79C874_RX_ERR_COUNT	0x24

#define	ETHER_MII_MAR_88E1145_1000T_CTRL	0x09
#define	ETHER_MII_MAR_88E1145_1000T_STAT	0x0a
#define	ETHER_MII_MAR_88E1145_SPEC_STATUS	0x11
#define	ETHER_MII_MAR_88E1145_INT_ENABLE	0x12
#define	ETHER_MII_MAR_88E1145_INT_STATUS	0x13
#define	ETHER_MII_MAR_88E1145_EXT_ADDR		0x1D

#define	ETHER_MII_MAR_88E1145_1000T_CTRL_1000T_FD		0x0200
#define	ETHER_MII_MAR_88E1145_1000T_CTRL_1000T_HD		0x0100

#define	ETHER_MII_MAR_88E1145_1000T_STAT_1000T_FD		0x0800
#define	ETHER_MII_MAR_88E1145_1000T_STAT_1000T_HD		0x0400

#define ETHER_MII_MAR_88E1145_SPEC_STATUS_RESOLVED		0x0800
#define ETHER_MII_MAR_88E1145_SPEC_STATUS_SPEEDMASK		0xc000
#define ETHER_MII_MAR_88E1145_SPEC_STATUS_1000			0x8000
#define ETHER_MII_MAR_88E1145_SPEC_STATUS_100			0x4000
#define ETHER_MII_MAR_88E1145_SPEC_STATUS_FULL_DUPLEX	0x2000

/*-----------------------------------------+
|  GLOBALS                                 |
+------------------------------------------*/
/*-----------------------------------------+
|  PROTOTYPES                              |
+------------------------------------------*/

#  ifdef __cplusplus
      }
#  endif

#endif/*_ETHER_MII_H*/





