//This programs will create a palindrome
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    char str[50];
    char *ptr;
    cout<<"Enter the string:\n";
    gets(str);
    int s;

    s=strlen(str);
    ptr=str;
    cout<<"String length is\n"<<s<<endl;

    while(*ptr!='\0')
    {
    *ptr++;
    }
    cout<<"Palindrome\n";
    for(int i=s;i>0;i--)
        {
            *ptr--;
            cout<<*ptr;

        }

    getch();
    return 0;
}

