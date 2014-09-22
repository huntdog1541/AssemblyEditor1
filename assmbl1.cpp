/*
 * assmbl1.cpp
 *
 *  Created on: Sep 21, 2014
 *      Author: David
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "DataRegister.hpp"

using namespace std;

int main(int argc, char ** argv)
{
	cout << "Hello World\n";
	DataReg reg1;
	reg1.addValue(4);
	reg1.printValue();
	//reg1.displayNum();
}



