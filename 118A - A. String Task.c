
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str[20], con[30];

    int len, i, j;
    //cout<<"Enter a string : ";

    gets(str);

    len=strlen(str);

    int c=0;

    for(i=0; i<len; i++)
    {
        if(str[i]!='a' || str[i]!='e' || str[i]!='i' ||
                str[i]!='o' || str[i]!='u' || str[i]!='A' ||
                str[i]!='E' || str[i]!='I' || str[i]!='O' ||
                str[i]!='U')
        {
            con[c] = str[i];
            c++;
        }

    }
    con[c]='\0';
    for(int i=0; i<strlen(con); i++)
    {

        cout<<"."<<con[i];
    }




}

