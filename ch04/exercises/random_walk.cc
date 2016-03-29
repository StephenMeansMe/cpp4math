/*
 * random_walk.cc
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

#include <ch04/exercises/random_walk.h>
#include <cassert>
#include <ch04/examples/uniform.h>

RandomWalk::RandomWalk( long start, double plusProb ) {

	position  = start;
	assert( ( plusProb >= 0.0 ) and ( plusProb <= 1.0 ) ); 
	mPlusProb = plusProb;
	
}

RandomWalk::RandomWalk( const RandomWalk& otherWalk ) {

	position  = otherWalk.position;
	mPlusProb = otherWalk.GetProb();

}

long RandomWalk::Iterate() {

	if( unif(0.0, 1.0) < mPlusProb ) {

		++position;

	} else {

		--position;

	}
	return position;

}

void RandomWalk::SetProb( double prob ) {

	assert( ( prob >= 0.0 ) and ( prob <= 1.0 ) );
	mPlusProb = prob;

}

double RandomWalk::GetProb() const {

	return mPlusProb;

}
