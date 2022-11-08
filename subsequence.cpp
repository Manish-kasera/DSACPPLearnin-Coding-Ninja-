#include<bits/stdc++.h>
using namespace std;

void subsequenece(string input,string output)
{
	if(input.empty())
	{
      cout << output << endl;
      return;
	}
     // Not choosing the first element
	subsequenece(input.substr(1),output);

    // choosing the first element
	subsequenece(input.substr(1),output+input[0]);
    

}

int subs(string input,string output[])
{
	if(input.empty())
	{
		output[0] = " ";
		return 1;
	}
    
    string smallString = input.substr(1);
	int smallOutputSize = subs(smallString,output);

	for(int i=0; i < smallOutputSize ;i++)
	{
		output[i + smallOutputSize] = input[0] + output[i];
	}

	return 2*smallOutputSize;
}

int main()
{
	string input,output="";
	cin >> input;

	subsequenece(input,output);


	// string input;
	// cin >> input;

	// string* output = new string[1000];
	// int count = subs(input,output);

	// for(int i=0;i<count ;i++)
	// {
	// 	cout << output[i] <<endl;
	// }

	return 0;
}