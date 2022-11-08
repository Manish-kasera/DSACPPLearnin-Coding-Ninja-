#include <bits/stdc++.h>
using namespace std;

void reverseStringWordWise(char input[]) {
    // Write your code here
    vector <string> words;
    string word="";
    
    int size=strlen(input);
    for(int i=0;i<=size;i++)
    {
        
        if(input[i]!=' ' && input[i]!='\0')
            word+=input[i];
        else
        {
            words.push_back(word);
            word="";
        }
    }

    reverse(words.begin(),words.end());
}

void reverse1(char input[],int start,int end)
{
	int s= start,e =end;
	while(start <= end)
	{
		char temp = input[start];
		input [start] = input[end];
		input[end] = temp;
		start++;
		end--;
	}
    for(int i=s ;i <= e;i++)
	   cout << input[i];
	cout << endl;
}

void reverseEachWord(char input[]) 
{
	for(int i=0;i < strlen(input);)
	{
		int start = i;

		while(input[i] != ' ' && i < strlen(input))
		{
			i++;
			cout << i <<endl;
		}

		int end = i-1;
		reverse1(input,start,end);
		if(i < strlen(input))
		    i++;
	}

	for(int i=0; input[i] != '\0';)
	{
		cout << input[i] ;
	}
}

int main()
{

	
	char str[100] ;
    cin.getline(str,100);
   
    reverseEachWord(str);


    // reverse1(str,0,2);
    // cout << str  << endl;



   // string s;
	// getline(cin,s);
	
	// cin.getline(str,99);
	// reverseStringWordWise(str);
    // strcpy(str,s.c_str());
   
   // for(int i=0;i <2;i++)
   // {
   // 	cout << str[i] << endl;
   // }

	return 0;
}