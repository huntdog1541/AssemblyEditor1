/*
 * AccumulatorX.hpp
 *
 *  Created on: Sep 21, 2014
 *      Author: David
 */

#ifndef ACCUMULATORX_HPP_
#define ACCUMULATORX_HPP_

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

class Accum
{
	public:
		Accum() {
			currentValue = 0;
			clearValue();
		}
		~Accum() {
			cout << "object is being deleted\n";
		}
		void setValue(int);
		void printValue();
		int getValue();
		void translateVal();
		void printHexVal();
		void clearValue();
	private:
		int value[32];
		int currentValue;
};


#endif /* ACCUMULATORX_HPP_ */
