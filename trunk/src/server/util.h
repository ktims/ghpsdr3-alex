/** 
* @file util.h
* @brief Header files for utility functions
* @author John Melton, G0ORX/N6LYT, Doxygen Comments Dave Larsen, KV0S
* @version 0.1
* @date 2009-03-05
*/

/* Copyright (C) 
* 2009 - John Melton, G0ORX/N6LYT, Doxygen Comments Dave Larsen, KV0S
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* as published by the Free Software Foundation; either version 2
* of the License, or (at your option) any later version.
* 
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
* 
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
* 
*/

#ifndef _UTIL_H
#define	_UTIL_H

#ifdef	__cplusplus
extern "C" {
#endif


extern void dump_ozy_buffer(char* prefix,int frame,unsigned char* buffer);
extern void dump_ozy_header(char* prefix,int frame,unsigned char* buffer);
extern void dump_iq_buffer(unsigned char* buffer);
extern void dump_udp_buffer(unsigned char* buffer);
#ifdef	__cplusplus
}
#endif

#endif	/* _UTIL_H */

