#include "Contact.h"

/*
*	Implement a constructor that initializes all the Contact parts, including address. Call the setter to set values
*	as they have the logic to check correct input
*	Declaration is given in Contact.h
*/

Contact::Contact()
{
	first_name = last_name = mobile_number = email_address = "";
	address = nullptr;
}

Contact::Contact(string first_name, string last_name, string mobile_number, string email_address, Address* address)
{
	void set_first_name(string first_name);
	void set_last_name(string last_name);
	void set_mobile_number(string mobile_number);
	void set_email_address(string email_address);
	void set_address(Address * address);
}

/*
*	Implement getter/setters for all the member variables of Contact. Also declare them in the Contact.h header file
*	In each setter, do not set value if string is empty ("" 0 size).
*   Check in phone number setter, Phone number must be 11 digits
*/

void Contact::set_first_name(string first_name)
{
	if (!first_name.empty())
	{
		this->first_name = first_name;
	}
}

void Contact::set_last_name(string first_name)
{
	if (!last_name.empty())
	{
		this->last_name = last_name;
	}
}

void Contact::set_mobile_number(string mobile_number)
{
	if (!mobile_number.empty() && mobile_number.length() == 11)
	{
		this->mobile_number = mobile_number;
	}
}

void Contact::set_email_address(string email_address)
{
	if (!email_address.empty())
	{
		this->email_address = email_address;
	}
}

void Contact::set_address(Address* address)
{
	if (address != nullptr)
		this->address = address;
}

string Contact::get_first_name()
{
	return first_name;
}
string Contact::get_last_name()
{
	return last_name;
}
string Contact::get_mobile_number()
{
	return mobile_number;
}
string Contact::get_email_address()
{
	return email_address;
}

Address* Contact::get_address()
{
	return address;
}
/*
*	Implement the equals function(as declared in header file) that takes a
*   Contact object and checks if it is equal to current object refered by (this pointer).
*   Compare all the attributes.
*   For comparing address of contact you can call the equals function of the Address object;
*   For example: this.address.equals
*/

bool Contact::equals(const Contact& contact)
{
	/*if (first_name == contact.first_name && last_name == contact.last_name && mobile_number == contact.mobile_number && email_address = contact.email_address)
	{
		return true;
	}

	return false;*/

	bool equal_addresses;
	if (this->address && contact.address)
	{
		equal_addresses = this->address->equals(*contact.address);
	}
	else
	{
		equal_addresses = (this->address == contact.address);
	}
	if (this->first_name == contact.first_name && this->last_name == contact.last_name && this->mobile_number == contact.mobile_number && this->email_address == contact.email_address && equal_addresses)
	{
		return true;
	}
	else
	{
		return false;
	}

}


Contact* Contact::copy_contact()
{
	Address* new_address;
	if (this->address != nullptr)
		new_address = new Address(*this->address);
	else
		new_address = nullptr;
	return new Contact(first_name, last_name, mobile_number, email_address, new_address);

}
