
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Address {
private:
	string house;
	string street;
	string city;
	string country;

public:
	bool equals(const Address& address);
	void print_address();
	Address copy_address();

	Address(string house,string street,string city,string country);
	Address();

	void set_house(string);
	void set_street(string);
	void set_city(string);
	void set_country(string);

	string get_house();
	string get_street();
	string get_city();
	string get_country();

};
