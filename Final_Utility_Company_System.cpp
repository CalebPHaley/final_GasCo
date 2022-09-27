//============================================================================
// Name        : CS-405.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * CS-405 Final Project
 *
 * Final_Utility_Company_System.cpp
 *
 *  Created on: Nov 5, 2017
 *  Author: Curtis
 */

//***************************************************************
//                   Final Project - Utility Company
//***************************************************************

#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<fstream>
#include<iomanip>
#include <string>
#include <cstring>
#include <cstdlib>
#include<conio.h>
#include "Login.h"
#include "Record.h"
#include "Service.h"
using namespace std;

Record record;

int main()
{
   char ch;

    do
    {
	  system("cls");
	  cout<<"\n\n\n\tMAIN MENU";
	  cout<<"\n\n\t01. CUSTOMER";
	  cout<<"\n\n\t02. ADMINISTRATOR";
	  cout<<"\n\n\t03. EXIT";
	  cout<<"\n\n\tPlease Select Your Option (1-3) ";
	  ch=getche();
	  switch(ch)
	  {
		 case '1': system("cls");
			   record.placeOrder();
			   getch();
			   break;
		  case '2': record.adminMenu();
			    break;
		  case '3':exit(0);
		  default :cout<<"\a";
	}
    }while(ch!='3');
   return 0;
}





