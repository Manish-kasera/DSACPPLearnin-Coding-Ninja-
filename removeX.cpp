#include<bits/stdc++.h>
using namespace std;

void removeX(char ch[])
{
	if(ch[0] == '\0')
		return ;

	if(ch[0] != 'x')
		removeX(ch+1);
	else
	{
		int i=1;
		for(i; ch[i] !='\0';i++)
		{
			ch[i-1] = ch[i];
		}

		ch[i-1] = ch[i];
		removeX(ch);
	}
}

int main()
{ 
	char ch[21];
	cin.getline(ch,20);

    cout << strlen(ch) << endl;
    removeX(ch);
    cout << strlen(ch) << endl; 

	return 0;
}