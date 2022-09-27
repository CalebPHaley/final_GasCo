/*
 * Service.h
 *
 *  Created on: Nov 5, 2017
 *      Author: Curtis
 */

#ifndef SERVICE_H_
#define SERVICE_H_

#include<iostream>
#include<fstream>
#include <cstdlib>
#include<conio.h>
#include <climits>

class Service {
private:
   int customer_number;
   char name[50];
   int *service_number;
   char *service_buff;
   int *number_array;
   float serviceVar,qty,tax,discount;
public:
	Service();
	virtual ~Service();
	void createService();
	void showService();
	void storeService(void);
	void returnServiceNumber(void);
	int  retsno(){return customer_number;}
	float retService(){return serviceVar;}
	char* retname(){return name;}
	int retdis(){return discount;}
};

#endif /* SERVICE_H_ */
