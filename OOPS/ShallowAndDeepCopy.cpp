#include <bits/stdc++.h>
using namespace std;

class Student
{
   private:
   	int age;
   	char *name;


   public:
    
  
    Student(int age,char *name)
    {
    	this -> age = age;

      // Shallow Copy (Worst)
    	// this -> name = name;

      // Deep Copy

      this -> name = new char[strlen(name) + 1];
      strcpy(this -> name,name);
      // 1 for the null character
    }

    Student()
    {

    }

    void display()
    {
    	cout << name << " " << age << endl;
    }	
};

int main()
{
    
   char name[100] ="Manish";
	Student s1(12,name);
	s1.display();

   name[0] ='A';
	Student s2(231,name);

	s2.display();

	s1.display();


	return 0;
}