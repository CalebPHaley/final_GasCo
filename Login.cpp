/*
 * Login.cpp
 *
 *  Created on: Nov 5, 2017
 *      Author: Curtis
 */

#include "Login.h"

using namespace std;

void Login::enterPassword(void){

	puts("Enter 8 character password");
	gets(Password);
}

void Login::copyUsername(string str1, string str2){
	strcpy(name, str1.c_str());
	strcat(name, " = ");
	strcat(name, str2.c_str());
	cout << name;

}

int Login::copyPassword(){
	strcpy(a, "copypassword");
	strcpy(b, "copypassword");
	strcpy(c, a);
	strcat(c, b);
	printf("a = %s\n", a);
	return 0;

}

int Login::testUsernamePassword(void) {
	arg1 = "Test Username and Password.";

	while (arg1[i] != '\0') {
		buff[i] = arg1[i];
		i++;
	}
	buff[i] = '\0';
	printf("buff=%s\n", buff);

	return buff;

}

void Login::isPasswordOK(void) {

	puts("Enter Password");

	gets(passwordCheck);
	PwStatus = (strcmp(passwordCheck, "goodpass") == 0);
	if (PwStatus == false) {
		puts("Access Denied");
	}
	else {
		puts("Access Granted");
	}

}

Login::Login() {
	// TODO Auto-generated constructor stub

}

Login::~Login() {
	// TODO Auto-generated destructor stub
}

