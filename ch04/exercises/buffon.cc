/*
 * buffon.cc
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

#include <ch04/exercises/buffon.h>
#include <cmath>
#include <ch04/examples/uniform.h>

double buffon(long n)
{
   double x; 
   double y;
   long count = 0;   // number of throws where the needle crossed a line
   
   for( long i = 0; i < n; i++ )
   {
      x = unif( 0.0, 1.0 );
      y = unif( 0.0, 1.0 );
      if( x * x + y * y < 1 )
      {
         count++;
      }
   }  
   return 4.0 * double(count) / double(n);   // estimated value for pi
}
