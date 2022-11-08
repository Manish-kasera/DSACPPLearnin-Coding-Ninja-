#include<bits/stdc++.h>
using namespace std;

string compress(string s)
{
	string ans = "" ;
    int count = 1;
    int start = 0, end=1;

	for(int i=0;i < s.size();i++)
	{
       if(s[start] == s[end])
       {
       	end++;
       	count++;
       }
       else if(s[start]!= s[end])
       {
       	ans += s[start];
       	if(count >=2)
       	  ans += to_string(count);
       	count = 1;
       	start = end;
       	end++;
       }
	}
   
   return ans;
}


void removeConsective(char input[])
{ 
	int start =0,end=1;
    string ans ="";
	for(int i=0;i < strlen(input);i++)
	{
		if(input[start] == input[end])
		{
			end++;
		}
		else if( input[start] != input[end])
		{
			ans += input[i];
			start=  end;
			end++;
		}
	}
  cout << ans;
}

int main()
{
    
    // cout << compress("aaabbcddeeeee");
    
    char ch[100];
    cin.getline(ch,23);
    removeConsective(ch);


	return 0;
}
