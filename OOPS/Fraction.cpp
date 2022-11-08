#include<bits/stdc++.h>
using namespace std;

class Fraction
{
	private :
	 int numerator;
	 int denominator;


	

	public:

    void simplfy()
    {
    	int gcd = 1;
    	int j = min(this -> numerator ,this -> denominator);

    	for(int i=1;i <= j;i++)
    	{
    		if((this -> numerator % i )== 0 && (this -> denominator ) % i ==0)
    		{
    			gcd = i;
    		}
    	}

    	this -> numerator = this->numerator / gcd;
    	this -> denominator = this -> denominator /gcd;

    }

	// void add(Fraction f2)
   // Passing reference and also make it const
   void add(Fraction const &f2)
    {
    	int lcm = this -> denominator * (f2.denominator);
    	int x = lcm / this -> denominator;
    	int y = lcm / f2.denominator;

    	int num = x * (this -> numerator) + (y * f2.numerator);

    	this -> numerator = num;
    	this -> denominator = lcm;

    	simplfy();
    }
     

    void multiple(Fraction const &f2)
    {
      this -> numerator = this -> numerator * (f2.numerator);
      this -> denominator = this -> denominator * (f2.denominator);

      simplfy();

    } 

    
    void display()
    {
    	cout << numerator <<"/" << denominator << endl;
    }


    Fraction()
    {

    }

    Fraction(int numerator, int denominator)
    {
    	this -> numerator = numerator;
    	this -> denominator = denominator;
    }
};


int main()
{
   
   Fraction f1(10,2);
   Fraction f2(15,4);

   // f1.display();
   // f2.display();

   f1.add(f2);

   // f1.display();
   // f2.display();


   // f1.multiple(f2);
   f1.display();
    

}