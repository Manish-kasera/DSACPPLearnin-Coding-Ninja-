#include <string.h>
using namespace std;

int helper(string input,string out,vector <string> v)
{  

	if(input.size() == 0)
	{
		v.push_back(out);
		return;
	}
   
    int ch1 = input[0] - '0';
    char addOne = char(ch1 - 1 +'a');

    // Picking one element 
    helper(input.substr(1),out+addOne,v);

    if(input.size() >= 2)
    {
    	int ch1 = input[0] - '0';
    	int ch2 = input[1] - '0';
        
        int sum = ch1 * 10 + ch2;

        if(sum >= 10 && sum <= 26)
        {
        	char addTwo = char(sum - 1 +'a');

        	helper(input.substr(2),output+addTwo,v);
        }
    }
}

int getCodes(string input, string output[10000]) 
{
   vector <string> v;
   string out="";

   helper(input,out,v);

   for(int i=0;i < v.size();i++)
   {
   	output[i] = v[i];
   }

   return v.size();


}
