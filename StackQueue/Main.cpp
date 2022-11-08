#include <bits/stdc++.h>
using namespace std;

#include "stackArray.cpp"

int main()
{
	Stack s1(12);
	
	cout << s1.size() << endl;
	cout << s1.pop() << endl;

	s1.push(2232) ;
	cout << s1.size() << endl;
	cout << s1.top() << endl;
	cout << s1.pop() << endl;
	cout << s1.top() << endl;
	



	return 0;
}