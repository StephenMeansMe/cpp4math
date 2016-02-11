/*
 * xy2polar.cc
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

#include "xy2polar.h"
#include <cmath>

void xy2polar(float x, float y, float& r, float& t)
{
	if ((x == 0) and (y == 0)) {
		r = 0;
		t = 0;
	} else if ((x == 0) and (y != 0)) {
		t = ((y > 0) - (y < 0)) * M_PI / 2;
		r = fabsf(y);
	} else if ((x != 0) and (y == 0)) {
		if (x < 0) {
			t = M_PI;
		} else {
			t = 0;
		}
		r = fabsf(x);
	} else {
		r = sqrtf(x * x + y * y);
		t = atan2f(x, y);
	}
}
