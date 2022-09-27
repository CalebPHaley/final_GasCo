/*
 * Service.cpp
 *
 *  Created on: Nov 5, 2017
 *      Author: Curtis
 */

#include "Service.h"

using namespace std;

void Service::createService()
{
	cout<<"\nPlease Enter The Service Number ";
	cin>>customer_number;
	cout<<"\nPlease Enter The Name of The Service ";
	cin>>name;
	cout<<"\nPlease Enter The Price of The Service ";
	cin>>serviceVar;
	cout<<"\nPlease Enter The Discount (%) ";
	cin>>discount;
 }

void Service::showService()
{
	 cout<<"\nThe Service Number : "<<customer_number;
	 cout<<"\nThe Name of The Service : ";
	 puts(name);
	 cout<<"\nThe Price of The Service : "<<serviceVar;
	 cout<<"\nDiscount : "<<discount;
 }

void Service::storeService(void)
{
	service_number = new int;
	service_buff = (char *)malloc(10);
	number_array = new int[10];

	service_buff == service_buff;
	service_number == service_number;
	number_array == number_array;
}

void Service::returnServiceNumber(void)
{
	cout << INT_MAX+1;
}


Service::Service() {
	// TODO Auto-generated constructor stub

}

Service::~Service() {
	// TODO Auto-generated destructor stub
}

