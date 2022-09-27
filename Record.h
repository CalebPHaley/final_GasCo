/*
 * Record.h
 *
 *  Created on: Nov 5, 2017
 *      Author: Curtis
 */

#ifndef RECORD_H_
#define RECORD_H_

#include<iostream>
#include<fstream>
#include<iomanip>
#include <string>
#include <cstring>
#include <cstdlib>
#include<conio.h>

class Record {
public:
	Record();
	virtual ~Record();

	void writeStaticServiceArray(void);
	void writeDynamicServiceArray(void);
	void writeService();
	void displayAll();
	void displayNumber();
	void displayServiceItem(struct service_object *obj);
	void displayService(int n);
	void serviceMenu();
	void modifyService();
	void deleteServiceBuffer(void);
	void deleteServiceCharacter(void);
	void deleteService();
	void placeOrder();
	void openFileAuthentication();
	void adminMenu();

};

#endif /* RECORD_H_ */
