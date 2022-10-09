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


	void setmechid(int mechid);

	void setapp(int h, int m);

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

