void trim(char input[],int i,int j)
{
    if(input[i] =='\0')
    {
        input[j] ='\0';
        return;
    }


    if(input[i] != ' ')
    {
        input[j] = input[i];
        trim(input,i+1,j+1);
    }
    else
    {
        trim(input,i+1,j);
    }

}

void trimSpaces(char input[])
{
   trim(input,0,0);
}