/*
 * ex04_01.cc
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
#include <ch04/exercises/sq_unif.h>

int main()
{
	long n;
	long reps;
	
	std::cout << "Enter the number of experiments --> ";
	std::cin  >> n;
	std::cout << "Enter the number of trials per experiment --> ";
	std::cin  >> reps;

    double trial_avg;
	double exp_avg = 0.0;
	
	for( long i = 0; i < n; i++ )
	{
		trial_avg = 0.0; // reset trial average
		for( long j = 0; j < reps; j++ )
		{
			trial_avg += sq_unif();
		}
		exp_avg += trial_avg / double(reps);
	}
	exp_avg /= double(n);

	std::cout << exp_avg << std::endl;
	
	return 0;
}
