#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int a, b[50], i;

    cout<<"Enter the decimal number\n";
    cin>>a;
    for(i=0;a>0;i++)
    {
      b[i]=a%2;
      a=a/2;
    }
    cout<<"The binary number is\n";
    for(i=i-1;i>=0;i--)
    {
        cout<<b[i];
    }
    getch();
    return 0;
}
