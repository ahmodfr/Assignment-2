
#include <iostream>
#include "mechanic.h"
#include "customer.h"
#include "Person.h"
#include <vector>
#include <queue>
#include <iterator>
#include <algorithm>


using namespace std;

int main()
{

	// till line 45 these are declarations for different data types used in the program. 
	string n;
	int id, ag, no;

	mechanic m1, m2, m3;

	m1.setname("Ahmed Fikry");
	m2.setname("Noor Hassan");
	m3.setname("Heba Nabil");

	m1.setage(19);
	m2.setage(20);
	m3.setage(18);

	m1.setid(324);
	m2.setid(11);
	m3.setid(298);




	vector <mechanic> mechV;
	mechV.push_back(m1);
	mechV.push_back(m2);
	mechV.push_back(m3);

	cout << "How many customers are there? " << endl;
	cin >> no;
	vector <customer> cstmrs(no);
	

	
	// making & intializing (no) customers inside the vector cstmrs
	for (int i = 0; i < no; i++) {

		int hrs, mnts;
		cout << "Customer Number " << i+1 << " Please enter your name, ID, and age. Name: ";
		cin >> n; cout << "ID: ";
		cin >> id; cout << "Age: ";
		cin >> ag; cout << endl;

		cstmrs[i].setname(n);
		cstmrs[i].setid(id);
		cstmrs[i].setage(ag);

		cout << "Welcome to the mechanic shop!! " << cstmrs[i].getname() << "! choose your appointment time " << endl;
		cout << "hour is: ";
		cin >> hrs;
		cout << "minutes is: ";
		cin >> mnts;
		cout << "your chosen appointment time is " << hrs << ":" << mnts << endl;
		cout << "-----------------------------------------------------------------" << endl;

		cstmrs[i].setapp(hrs, mnts);

	}


	// sort function is a function that belongs to vectors and sorts them however u want. 
	// it takes first two parameters the pointers of their starting and end point then the last
	// parameter is optional yet when used it gives a marker for the sorting
	// the last parameter used my overloaded fucntion operator> to sort the vector from earliest
	// appointment to latest. 

	sort(cstmrs.begin(), cstmrs.end(), [](customer a, customer b) {return b > a; } );

	queue <customer> q;

	for (int i = 0; i < no; i++) {

		q.push(cstmrs[i]);
	}


	// loop that goes over all the customers in the queue and assigns them to the corresponding mechanic
	// when the three mechanics get busy the fourth customer gets the first mechanic again and so forth
	// the customers will be printed according to their appointment time from earliest to latest along with their mechanic name, age, and ID

	while (!q.empty())
	{
		for (int i=0; i<=2 ;i++)
		{
			if (mechV[i].isAvailable(q.front().appointment)) {
				mechV[i].rgstr(q.front().appointment);
				mechV[i].countup();
				q.front().setmechid(mechV[i].getid());
				cout << "Registeration done for " << q.front().getname() << endl;
				cout << "-----------------------------------------------------------" << endl;
				cout << "Your mechanic info: Name: " << mechV[i].getname() << endl;
				cout << "Age: " << mechV[i].getage() << endl;
				cout << "ID: " << mechV[i].getid() << endl;
				cout << "Appointment is at: " << q.front().appointment.hours << ":" << q.front().appointment.mins << endl;
				cout << "-----------------------------------------------------------" << endl;
				q.pop();
				if (q.empty())
					break;
			}
			else {
				cout << "Sorry !! No avaialable mechanics found for (" << q.front().getname() << ") Try again later " << endl;
				exit(0);
			}
		}
	}
	

	

	return 0;
}