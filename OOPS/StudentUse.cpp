#include<bits/stdc++.h>
using namespace std;

// Including Student file in this file
#include "Student.cpp"


int main()
{
	// Creating object Statically
	Student s1;

	s1.name = "Manish";
	s1.roll = 1;
	s1.contact = 9102;
	s1.section = 'A';

	cout << s1.section <<" " << s1.roll <<" ";
	cout << s1.contact << " " << s1.name << endl;


	// Creating Object Dynamically
	Student *s2 = new Student;

	// (*s2).name ="Verma"; or
	s2 -> name = "Verma";

	// (*s2).contact = 345; or
     s2 -> contact = 345;

	// (*s2).roll = 23; or
	s2 -> roll = 23;
	
	// (*s2).section ='A'; or
	s2 -> section = 'A';

    cout << (*s2).section <<" " << (*s2).roll <<" ";
	cout << (*s2).contact << " " << (*s2).name << endl;

	cout << s2->section <<" " << s2->roll <<" ";
	cout << s2->contact << " " << s2->name << endl;

	return 0;
}