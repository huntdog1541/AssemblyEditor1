/*
 * DataRegister.hpp
 *
 *  Created on: Sep 21, 2014
 *      Author: David
 */

#ifndef DATAREGISTER_HPP_
#define DATAREGISTER_HPP_

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "AccumulatorX.hpp"

class DataReg
{
	public:
	DataReg();
	~DataReg();
	void addValue(int);
	void printValue();
	void displayNum();

	private:
	Accum accmx;
};



#endif /* DATAREGISTER_HPP_ */
