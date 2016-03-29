/*
 * ex04_06.cc
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

#include <iostream>
#include <ch04/exercises/random_walk.h>

int main(int argc, char **argv) {

	long N = 10000;
	double avg_positive;

	std::cout << "k\t| Pr(Random k-walk > 0)\n"
	          << "--------------------------------\n";
	for( long k = 1; k <= 20; k++ ) {
		// Experimenting with random walks of length k
		avg_positive = 0.0;  // Reset the proportion
		for( long j = 0; j < N; j++ ) {
			/*
			 * Here we conduct N experiments to see what proportion of random
			 * walks of length k end on the positive side of the number line.
			 *
			 * Each round of the experiment we create a new RandomWalk object,
			 * iterate k times, and check to see if we're greater than 0.
			 * 
			 */
			RandomWalk* p_rand_walk = new RandomWalk(0, 0.7);
			for( long i = 0; i < k; i++ ) {

				p_rand_walk->Iterate();

			}
			if( p_rand_walk->position > 0 ) {

				++avg_positive;

			}
			delete p_rand_walk; // Clean up our RandomWalk object
			
		}
		avg_positive /= double(N);
		std::cout << k << "\t|\t" << avg_positive << "\n";
				  
	}
}

