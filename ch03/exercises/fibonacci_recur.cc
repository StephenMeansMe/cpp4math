/*
 * fibonacci_recur.cc
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

#include "fibonacci_recur.h"
#include <iostream>

long fibonacci_recur(long N) {
	if (N < 0) {
		std::cerr << "Warning: Index was negative!\n";
		return -1;
	} else if ((N == 0) or (N == 1)) {
		return 1;
	} else {
		return fibonacci_recur(N - 1) + fibonacci_recur(N - 2);
	}
}
