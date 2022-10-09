#pragma once 
#include "mechanic.h"
#include "customer.h"
#include "Person.h"


int mechanic::counter = 0;

bool mechanic::isAvailable(Appointment t)
{
	if (apps.empty())
		return true;
	else
	{
		for (int i = 0; i < apps.size(); i++) {
			if (apps[i].hours == t.hours) {
				return false;
				break;
			}
		}
		return true;
	}
}

void mechanic::setname(string s)
{
	name = s;
}

void mechanic::countup()
{
	counter++;
}

string mechanic::getname()
{
	return name;
}


void mechanic::setid(int d)
{
	id = d;
}

int mechanic::getid()
{
	return id;
}

void mechanic::setage(int a)
{
	age = a;
}

void mechanic::rgstr(Appointment a)
{
	apps.push_back(a);
}

int mechanic::getage()
{
	return age;
}

void mechanic::printinfo()
{
	cout << "name is: " << name << endl;
	cout << "age is: " << age << endl;
	cout << "ID is: " << id << endl;


}

int mechanic::getcount() 
{
	return counter;

}
