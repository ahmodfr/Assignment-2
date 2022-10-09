#pragma once 
#include <iostream>
#include"Person.h"
#include "mechanic.h"
using namespace std;

class customer: public Person
{
private:

	int MechanicID;

public:


	void setmechid(int mechid); // sets the mechanic ID to the customer matched with

	void setapp(int h, int m); // sets the appointment the customer chose

	void setname(string s);
	string getname();
	void setid(int d);
	int getid();
	void setage(int a);
	int getage();
	void printinfo();

	bool operator< (customer c);
	bool operator> (customer c);
	bool operator== (customer c);



	Appointment appointment;

};

