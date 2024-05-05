#include "Address.h"

/*
*	Implement a constructor that initializes all the address parts
*
*/

Address::Address()
{
	house = street = city = country = "";
}

Address::Address(string house, string street, string city, string country)
{
	this->house = house;
	this->street = street;
	this->city = city;
	this->country = country;
}

/*
*	Implement getter/setters for all the member variables of Address. Also declare them in the Address.h header file
*
*/

void Address::set_house(string house)
{
	this->house = house;
}
void Address::set_street(string street)
{
	this->street = street;
}
void Address::set_city(string city)
{
	this->city = city;
}
void Address::set_country(string country)
{
	this->country = country;
}

string Address::get_house()
{
	return house;
}
string Address::get_street()
{
	return street;
}
string Address::get_city()
{
	return city;
}
string Address::get_country()
{
	return country;
}

/*
*	Implement the equals function that takes an Address object and checks if it is equal to
*	current object refered by (this pointer)
*	Two addresses are equal if all the attributes of addresses are equal
*/
bool Address::equals(const Address& address)
{
	if (this->house == address.house && this->street == address.street && this->city == address.city && this->country == address.country)
	{
		return true;
	}
	return false;
}

void Address::print_address()
{
	/*
	*	Print address on one line as
	*	House, Street, City, Country
	*/
	cout << "Address: " << "house " << house << ", street " << street << ", city " << city << ", country " << country << endl;

}

Address Address::copy_address()
{
	/*
		return a copy of this
	*/
	
	return Address(house, street, city, country);
}
