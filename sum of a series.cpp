// Program to print the sum of the series where
// sum=1+x^2+x^3+x^4......+x^n
#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
    long double sum=1;
    int n,x ;

    cout<<"Enter the number till which you want to find the sum:"<<endl;
    cin>>n;
    cout<<"Enter the x"<<endl;
    cin>>x;

    for(int i=1;i<=n;i++)
        {
            sum=sum+pow(x,i);
        }
    cout<<"Sum is"<<sum;
    getch();
    return 0;
}
