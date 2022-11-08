#include <bits/stdc++.h>
using namespace std;

class Faculty
{
	public :
	  int id;
	  int salary;
      string name;


    Faculty()
    {

    }  

    Faculty(int id,int salary,string name)
    {
    	this -> id = id;
    	this -> salary = salary;
    	this -> name = name;
    }



    public :

    void display()
    {
    	cout << id << " " << name << " " << salary << endl;
    }
};


int main()
{ 

	Faculty f1(1,239,"Manish");
	Faculty f2(2,43459,"Sachin");

	Faculty *f3 = new Faculty(3,344,"Verma");

	f1.display();
	f2.display();
	f3 ->display();

	f2 = f1;

	f1 = *f3;

	*f3 = f1;

	f1.display(); // Verma
	f2.display(); // Manish
	f3 ->display();// Verma


/* 
	Faculty f1(1,10000,"Manish");
	cout << "f1 ";
	f1.display();

    // Copying the f1 object to f2
	Faculty f2 = f1; // Faculty f2(f1) (Correct)
	cout << "f2 ";
	f2.display(); 


	Faculty *f3 = new Faculty(1,3030,"Sachin");
	cout << "f3 ";
	f3 ->display();
   
    Faculty f4(*f3);
	cout << "f4 ";
    f4.display();

    Faculty *f5 = new Faculty(*f3);
	cout << "f5 ";
    f5->display();

    Faculty *f6 = new Faculty(f1);
	cout << "f6 ";
    f6->display();

*/
	
}