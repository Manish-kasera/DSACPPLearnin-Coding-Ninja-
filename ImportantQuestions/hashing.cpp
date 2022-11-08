#include<bits/stdc++.h>
using namespace std;
#define NUM  128



void frequency(string s)
{
	int hash[NUM] ={0};
  
   for(int i=0;i < s.size();i++)
   {
   	 hash[s[i]]++;
   }

   for(int i=0;i <NUM;i++)
   {
  	cout <<"index : " << i <<" count : " << hash[i] << endl;
   }
}

int main()
{
  string s = "Manish Kumar Kasera 1211111";
  frequency(s);

 

}