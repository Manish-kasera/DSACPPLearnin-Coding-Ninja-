#include<bits/stdc++.h>
using namespace std;
int helper(int i,char ch[])
{
	if(ch[i] == '\0' )
		return i;

	return helper(i+1,ch);
}

int length(char ch[])
{
	int len = 0;
	return helper(0,ch);
}

int length2(char ch[])
{
	if(ch[0] == '\0')
		return 0;
    
    int smallans1 = length2(ch+1);
    return 1 + smallans1;

}


int main()
{
	char ch[100];
	cin.getline(ch,20);

	// cout << length(ch) << endl;

	// cout << length2(ch) << endl;

	
}
