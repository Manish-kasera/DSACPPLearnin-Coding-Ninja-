#include<bits/stdc++.h>
using namespace std;

void solve(string s,int i,string output)
{
	if(i >= s.size())
	{
		cout << output <<endl;
		return;
	}

	// not including the element
	solve(s,i+1,output);

	solve(s,i+1,output+s[i]);
}

void allsubseq(string s)
{
	string output="";
	solve(s,0,output);
}

int main()
{
	string s="abcd";
	allsubseq(s);
}