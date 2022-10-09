#pragma once 
#include <iostream>
#include <vector>
#include "Person.h"
#include "customer.h"
using namespace std;
class mechanic: public Person
{
private:
	static int counter;
	vector <Appointment> apps;

public:

	int static getcount();

	bool isAvailable(Appointment t);

	void static countup();

	void rgstr(Appointment a);

	void setname(string s);
	string getname();
	void setid(int d);
	int getid();
	void setage(int a);
	int getage();

	void printinfo();
};

