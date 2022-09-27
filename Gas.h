/*
 * Gas.h
 *
 *  Created on: Nov 5, 2017
 *      Author: Curtis
 */

#ifndef GAS_H_
#define GAS_H_

#include<iostream>
#include<fstream>
#include<iomanip>
#include <string>
#include <cstring>
#include <cstdlib>
#include<conio.h>

class Gas {
public:
	Gas();
	virtual ~Gas();

	int gasChargeCalc(int a, int b);
	double gasChargeCalc(int a, double b);
	void gasFeeCalculation();

};

#endif /* GAS_H_ */
