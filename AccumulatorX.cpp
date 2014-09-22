/*
 * AccumulatorX.cpp
 *
 *  Created on: Sep 21, 2014
 *      Author: David
 */

#include "AccumulatorX.hpp"

using namespace std;

void Accum::setValue(int num)
	{
		currentValue = num;
		translateVal();
	}

void Accum::printValue()
	{
		cout << "The current value is ";
		cout << currentValue;
		cout << "\n";
		printHexVal();
	}

int Accum::getValue()
	{
		return currentValue;
	}

void Accum::translateVal()
	{
		int i;
		for(i = 0; i < 32; i++)
		{
		}
	}

void Accum::printHexVal()
	{
		int i;
		cout << "The Hex number: ";
		for(i = 0; i <32; i++)
		{
			cout << value[i];
		}
		cout << "\n";
	}

void Accum::clearValue()
	{
		int i;
		for(i = 0; i < 32; i++)
		{
			value[i] = 0;
		}
	}
