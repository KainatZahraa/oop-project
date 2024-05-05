#pragma once

#ifndef BASIC_LIB
#define BASIC_LIB
#include <iostream>
#include <string>
#endif // !BASIC_LIB

#include "Address.h"
#include<iostream>

class Contact {
private:
	string first_name;
	string last_name;
	string mobile_number;
	string email_address;
	Address* address;

public:
	bool equals(Contact contact);
	Contact* copy_contact();

	Contact();
	Contact(string first_name, string last_name,string mobile_number,string email_address, Address* address);

	void set_first_name(string);
	void set_last_name(string);
	void set_mobile_number(string);
	void set_email_address(string);
	void set_address(Address*);

	string get_first_name();
	string get_last_name();
	string get_mobile_number();
	string get_email_address();
	Address* get_address();

	bool equals(const Contact& contact);
};
