#pragma once 
#include <iostream>
#include "customer.h"
#include "Person.h"
#include "mechanic.h"
using namespace std;


void customer::setmechid(int mechid)
{
	MechanicID = mechid;
}



void customer::setapp(int h, int m)
{
	appointment.hours = h;
	appointment.mins = m;

}



void customer::setname(string s)
{
	name = s;
}

string customer::getname()
{
	return name;
}

void customer::setid(int d)
{
	id = d;
}

int customer::getid()
{
	return id;
}

void customer::setage(int a)
{
	age = a;
}

int customer::getage()
{
	return age;
}

void customer::printinfo()
{
	cout << "Customer name is " << name << endl;
	cout << "ID: " << id <<endl;
	cout << "age: " << age << endl;
	cout << "Appointment time is: " << appointment.hours << ":" << appointment.mins << endl;
	cout << "Their mechanic ID is: " << MechanicID << endl;
	cout << "-------------------------------------------------------------------" << endl << endl;
}

bool customer::operator<(customer c)
{
	if (appointment.hours < c.appointment.hours) {
		return true;
	}
	else if (appointment.hours == c.appointment.hours)
		if (appointment.mins < c.appointment.mins)
			return true;
	return false;
}

bool customer::operator>(customer c)
{
	if (appointment.hours > c.appointment.hours) {
		return true;
	}
	else if (appointment.hours == c.appointment.hours)
		if (appointment.mins > c.appointment.mins)
			return true;
	return false;
}

bool customer::operator==(customer c)
{
	if (appointment.hours == c.appointment.hours && appointment.mins == c.appointment.mins) {
		return true;
	}
	return false;
}
