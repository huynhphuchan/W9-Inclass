/*
 * Title:		Person Class Declaration
 * Purpose:		A Class to represent a simple person
 * Author:		Carlos Arias
 * Date:		April 16, 2020
 */
#ifndef PERSON_H
#define PERSON_H

#include "date.h"

#include <string>
using std::string;

class Person {
	string _name;
	Date _birthDay;
public:
	Person();
	Person(const string& name);
	Person(const string& name, const Date& birthDay);
	Person(const string& name, size_t year, size_t month, size_t day);
	virtual string ToString()const;
	string GetName()const;
	Date GetBirthDay()const;
	size_t GetAge()const;
};


#endif //INHERITANCE_EXAMPLE_2_PERSON_H
