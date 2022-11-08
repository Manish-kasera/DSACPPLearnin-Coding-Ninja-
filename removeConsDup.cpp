#include<bits/stdc++.h>
using namespace std;

void removeConsecutiveDuplicates(char *ch) {
	
    if(ch[0] == '\0');
       return;
    
    if(ch[0] == ch[1])
    {
        int i=1;
        
        for(i;ch[i] != '\0';i++)
        {
            ch[i] = ch[i+1];
        }

        ch[i] = '\0';
        removeConsecutiveDuplicates(ch);
    }  
    else
    {
       removeConsecutiveDuplicates(ch+1);
    }

}

int main()
{
    char ch[223];
    cin.getline(ch,30);

    removeConsecutiveDuplicates(ch);
    cout << ch << endl;
    return 0;
}