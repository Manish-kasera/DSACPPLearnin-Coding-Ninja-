#include<bits/stdc++.h>
using namespace std;

void minLengthWord(char input[], char output[])
{
   // abc de ghihjk a uvw h j
   int mini = 10000;
   int count = 0;
   string s="";
    string temp ="";
   for(int i=0;i <= strlen(input);i++)
   {

   	  if(input[i] != ' ' && input[i] != '\0')
   	  {
   	  	temp += input[i];
        count++;
   	  }
   	  else
   	  {

         if(mini > count)
         {
           s.clear();	
           mini = count;
           s += temp;
         }

         temp.clear();
         count = 0;
   	  }

   }
   int k=0;
   for(;k < s.size();k++)
   {
   	output[k] = s[k];
   }	
    
    // cout << s << endl;

   output[k] = '\0';
}

