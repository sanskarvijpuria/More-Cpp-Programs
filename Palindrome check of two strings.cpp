#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    char str[50], str2[50] ;
    char *ptr, *ptr2;
    cout<<"Enter the string:\n";
    gets(str);
    int s,count=0;
    cout<<"\nEnter another string:"<<endl;
    gets(str2);

    s=strlen(str);                      // length of string 1
    ptr=str;                            //Taking value of string to pointer
    ptr2=str2;
    cout<<"String length of string 1 is\n"<<s<<endl;

    while(*ptr!='\0')                   //to move the pointer to the null character. so that it points at the null character.
    {
    *ptr++;
    }
    for(int i=s;i>0;i--)                // here it checks
        {

            *ptr--;                     // Because it was pointing at null and we need a character before it.
            if(*ptr==*ptr2)             // match last with the first
                {
                  count++;
                  *ptr2++;
                }
            else
                {
                    break;
                }
        }
    if(count==s)
    {
        cout<<"enter string is palindrome";
    }
    else
    {
        cout<<"Not a palindrome";
    }

    getch();
    return 0;
}

