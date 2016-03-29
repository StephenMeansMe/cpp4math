/*
 * ex04_05.cc
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

#include <ch04/exercises/point_on_sphere.h>
#include <iostream>
#include <cmath>
#include <ch04/examples/uniform.h>

int main(int argc, char **argv)
{
	long N = 10;
	long M = 100000;
	double outer_avg = 0.0;
	double inner_avg = 0.0;
	double x, y, z;
	for( long i = 1; i <= N; i++ ) {
		
		inner_avg = 0.0;
		for( long j = 1; j <= M; j++ ) {

			r3_unif(x, y, z);
			if( x*x + y*y + z*z <= 1 ) {

				inner_avg++;

			}
		}
		std::cout << "Probability for round " << i << ":\t"
				  << inner_avg / M << "\n";
		outer_avg += ( inner_avg / M );

	}
	outer_avg /= N;
	std::cout << "Average probability (via Monte Carlo) = "
			  << outer_avg << "\n";
	double iavg2, oavg2, d;
	for( long k = 2; k <= 10; k++ ) {

		double* nPoint = new double [k];
		oavg2 = 0.0;
		for( long i = 1; i <= N; i++ ) {

			iavg2 = 0.0;
			for( long j = 1; j <= M; j++ ) {

				d = 0.0;
				for( long l = 0; l < k; l++ ) {

					nPoint[l] = unif(-1.0, 1.0);
					d += nPoint[l] * nPoint[l];

				}
				if( d <= 1 ) {

					iavg2++;

				}
			}
			oavg2 += ( iavg2 / M );

		}
		oavg2 /= N;
		std::cout << "Avg. Probability in dimension " << k
				  << ":\t" << oavg2 << "\n";
		delete[] nPoint;

	}

	/*
	 * Volume of [-1, 1]^n = 2^n for n = 1, 2,...
	 * Volume of S^{n-1} = pi^{n/2} / Gamma(n/2 + 1) for n = 1, 2,...
	 * Chance of landing inside S^{n-1} = pi^{n/2} / [2^n * Gamma(n / 2 + 1)]
	 * 		= pi^{n/2} / [2^n * int_0^\infty x^{n/2 + 1} e^{-x} ]
	 *
	 */
	 
	return 0;

}
