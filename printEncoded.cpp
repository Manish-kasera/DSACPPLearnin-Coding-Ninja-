#include<bits/stdc++.h>
using namespace std;

void helper(string input,string output)
{
    if(input.size() == 0)
    {
    	cout << output << endl;
    	return;
    }

   int ch1 = input[0] - '0';
   char addOne = char(ch-1 + 'a');

   // picking only one element
   helper(input.substr(1),output + addOne);

   if(input.size() >= 2)
   {
     int ch2 = input[0] - '0';
     int ch3 = input[1] - '0';

     int sum = ch2 * 10 + ch3;

     if(sum >= 10 && sum <= 26)
     {
        char addTwo = char(sum - 1 + 'a');
        helper(input.substr(1),output + addTwo);

     }
   }
} 
 
void printAllPossibleCodes(string input) 
{
	string output="";
   helper(input,output); 
}
