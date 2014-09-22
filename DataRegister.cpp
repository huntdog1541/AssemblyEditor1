/*
 * DataRegister.cpp
 *
 *  Created on: Sep 21, 2014
 *      Author: David
 */
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "AccumulatorX.hpp"
#include "DataRegister.hpp"



DataReg::DataReg()
	{
		Accum accmx();
	}
DataReg::~DataReg()
	{
	}
void DataReg::addValue(int num)
	{
		accmx.setValue(num);
	}
void DataReg::printValue()
	{
		accmx.printValue();
	}
void DataReg::displayNum()
	{
		cout << "4\n";
	}



