#include<iostream>
#include<conio.h>
#include<string>
#include<math.h>

using namespace std;

int main()
{
    int a=0, ints,s=0,i,len=0, rem=0;
    string str;
    cout<<"Enter the binary number\n";
    cin>>str;           // Taking the binary number input as string

    ints = stoi(str);   //converting string to int type
    while(ints!=0)     // for number of digits in the binary number. Also not necessary if we use the alternate way. scroll down
        {
            ints/=10;
            len++;
        }
    ints = stoi(str);   //converting again from string to int type because in while it gets zero
    cout<<"number of digits in binary number are:\t"<<len<<"\n";

    /*while(len!=0)        // real conversion begins here
        {
        rem = ints%10;
        ints/=10;
        cout<<rem<<"\n";
        s=s+(rem*pow(2,a));
        len--;
        a++;
        }*/

    while(ints!=0)        // alternate way in which we do not even have to find the number of digits much simpler way.
        {
        rem = ints%10;
        ints/=10;
        cout<<rem<<"\n";
        s=s+(rem*pow(2,a));
        a++;
        }
    cout<<"the decimal number is\n"<<s;
    getch();
    return 0;
}
