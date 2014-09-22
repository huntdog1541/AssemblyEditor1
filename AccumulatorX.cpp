/*
 * AccumulatorX.cpp
 *
 *  Created on: Sep 21, 2014
 *      Author: David
 */

#include "AccumulatorX.hpp"
#include <limits>

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
		if(currentValue > numeric_limits<int>::max())
		{
			perror("Can not translate a number bigger than allowed\n");
			return;
		}
		int q = currentValue, i = 1, j, m = 0;
		int biny[32];
		while(q != 0)
		{
			biny[i++] = q % 2;
			q = q / 2;
		}
		for(j = i -1; j > 0; j--)
		{
			value[m++] = biny[j];
			cout << biny[j];
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
