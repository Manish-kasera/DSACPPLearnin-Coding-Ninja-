#include<bits/stdc++.h>
using namespace std;

void removeSpace(char input[])
{
   int n = strlen(input);
   string s="";

   int j=0;
   for(int i=0;i <n;i++)
   {
     if(input[i] != ' ')
     {
     	s += input[i];
     	j++;
     }
   	   
   }
   // cout << s << endl;
   j = 0; 
   for(j;j<s.size();j++)
   {
      input[j] = s[j];
   }
   
   input[j] = '\0';
} 

void removeX(char input[],char x)
{
	string s= "";
	int n = strlen(input);

	for(int i=0;i <n;i++)
	{
		if(input[i] != x)
			s += input[i];
	}
    int j=0;
	for(j;j < s.size();j++)
	{
		input[j] = s[j];
	}

	input[j] = '\0';
}

string removeXRec(char input[] , char ch,string s,int i,int n)
{   
	if(i == n)
		return s;
	if(input[i] != ch)
		s += input[i];

	return removeXRec(input,ch,s,i+1,n);
}

int main()
{
	char ch[200];

	cin.getline(ch,100);
	char x = 'x';
	// removeX(ch,x);

	cout << removeXRec(ch,x,"",0,strlen(ch)) << endl;
	cout << ch << endl;


	return 0;
}