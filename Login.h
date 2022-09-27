/*
 * Login.h
 *
 *  Created on: Nov 5, 2017
 *      Author: Curtis
 */

#ifndef LOGIN_H_
#define LOGIN_H_

#include <cstring>
#include<iostream>
#include<fstream>
#include <cstdlib>
#include<conio.h>

using namespace std;

class Login {
private:
	char Password[8];
	char name[20];
	char a[12];
	char b[12];
	char c[24];
	char *arg1;
	int i = 0;
	char buff[20];
	bool PwStatus;
	char passwordCheck[12];

public:
	Login();
	virtual ~Login();

	void enterPassword(void);
	void copyUsername(string str1, string str2);
	int copyPassword();
	int testUsernamePassword(void);
	void isPasswordOK(void);
};

#endif /* LOGIN_H_ */
