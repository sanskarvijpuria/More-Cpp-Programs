#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int i,n,s=0,a=1,t;

    cout<<"Enter the number till which you want the sequence"<<endl;
    cin>>n;
    cout<<"\n"<<s<<"\t"<<a<<"\t";
    for(i=0;i<n;i++)
        {
            t=a;
            a=s+a;
            s=t;
            cout<<s<<"\t";

        }

    getch();
    return 0;
}
