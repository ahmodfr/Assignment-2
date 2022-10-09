#pragma once 
#include <iostream>
using namespace std;

class Person

{
protected:
	string name;
	int id;
	int age;



public:
	Person() {
		name = "";
	};
	virtual void setname(string s)=0;
	virtual string getname()=0;
	virtual void setid(int d)=0;
	virtual int getid()=0;
	virtual void setage(int a)=0;
	virtual int getage()=0;
	virtual void printinfo()=0;

	struct Appointment {
		int hours;
		int mins;
	};
};