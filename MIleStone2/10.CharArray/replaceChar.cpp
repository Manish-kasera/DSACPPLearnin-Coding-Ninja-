void replace(char input[],char c1,char c2,int i)
{
    if(input[i] == '\0')
        return;

    if(input[i] == c1)
    {
        input[i] = c2;
    }

    replace(input,c1,c2,i+1);

}

void replaceCharacter(char input[], char c1, char c2) 
{

    replace(input,c1,c2,0);
}