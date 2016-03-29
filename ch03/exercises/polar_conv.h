/*
 * ex03_07.h
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

#ifndef POLAR_CONV_H
#define POLAR_CONV_H

/*! \fn void xy2polar(float x, float y, float& r, float& t)
 *  \brief Converts from (x, y) Cartesian coordinates to (r, t) polar coordinates.
 */

void xy2polar
(
		float  x,	//! \param x Cartesian x-coordinate
        float  y,	//! \param y Cartesian y-coordinate
        float& r,	//! \param r Polar radius coordinate (to convert)
        float& t	//! \param t Polar angle coordinate (to convert)
);

/*!  \fn void polar2xy(float r, float t, float& x, float& y)
 *  \brief Converts from (r, t) polar coordinates to (x, y) Cartesian coordinates.
 */

void polar2xy
(
		float  r,	//! \param r Polar radius coordinate
        float  t,	//! \param t Polar angle coordinate
        float& x,	//! \param x Cartesian x-coordinate (to convert)
        float& y	//! \param y Cartesian y-coordinate (to convert)
);

#endif
