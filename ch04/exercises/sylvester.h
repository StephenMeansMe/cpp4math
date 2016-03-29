/*
 * sylvester.h
 * 
 * Copyright 2016 Stephen <me@stephenmeansme.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#ifndef SYLVESTER_H
#define SYLVESTER_H

int four_pt_convex( bool circle = true );
void rcircle( float& x, float& y );
void rtriangle( float& x, float& y );
void check_convex( float x1, float y1,
				   float x2, float y2,
				   float x3, float y3,
				   float x4, float y4,
				   int& isConvex );

#endif  //SYLVESTER_H
