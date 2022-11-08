#include <bits/stdc++.h>
using namespace std;

string helper(int i,int n,string s,char input[])
{
  if(i== n)
  	return s;

  if(input[i] == input[i+1])
  {
  	s += input[i];
  	s += '*';
  }else{
  	s += input[i];
  }

  return helper(i+1,n,s,input);
}

void pairStar(char input[])
{
	string s="";
	int n = strlen(input);
	cout << helper(0,n,s,input);

// 	cout << s << endl;
}

int main()
{
  char ch[100];
  cin.getline(ch,20);
  cout << ch << endl;

  pairStar(ch);

  return 0;
}
