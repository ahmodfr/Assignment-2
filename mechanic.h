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

	void static countup(); // counts the number of times a mechanic has been booked and it works 

	void rgstr(Appointment a); // whenever a mechanic is registered, the appointment is stored in a vector apps so all the appointments for the guy are in one place.

	void setname(string s);
	string getname();
	void setid(int d);
	int getid();
	void setage(int a);
	int getage();

	void printinfo();
};

