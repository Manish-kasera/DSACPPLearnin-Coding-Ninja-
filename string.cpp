#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s1;
	// cin >> s1 ;
	getline(cin, s1);
	cout << s1 << endl;

	string s = "Manish Kumar Kasera";

	cout << s.substr(4) << endl;
	cout << s.substr(4,4) << endl;

	cout << s.find("Kum");
	return 0;
}