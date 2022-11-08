#include <bits/stdc++.h>
using namespace std;

int main()
{ 
  
  char ch ;
  cin >> ch;
  int count =0;

  while(ch != '$')
  {
  	count++;
  	cout<< ch <<endl;
  	cin >> ch ;
  	// ch = cin.get();
  }
 
 cout << count << endl;
}
