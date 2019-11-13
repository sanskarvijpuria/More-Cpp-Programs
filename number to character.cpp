#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main()
{	
    long int num,len=0,rem=0,r=0,sum=0 ;
    cout<<"Enter the number which you want to convert to character"<<endl;
    cin>>num;

    while(num!=0)
        {
            r=num%10;
            sum=(sum*10)+r;
            num/=10;
            len++;
        }
   

    while(len--)   
        {
        rem = sum%10;
        sum/=10;
        switch(rem)
            {
                case 1: cout<<"One\t";
                        break;
                case 2:cout<<"Two\t";
                        break;
                case 3:cout<<"Three\t";
                        break;
                case 4: cout<<"Four\t";
                        break;
                case 5:cout<<"Five\t";
                        break;
                case 6:cout<<"Six\t";
                        break;
                case 7:cout<<"Seven\t";
                        break;
                case 8: cout<<"Eight\t";
                        break;
                case 9:cout<<"Nine\t";
                        break;
                case 0:cout<<"Zero\t";
                        break;
                default: cout<<"Wrong Input ";break;
            }

        }
    getch();
    return 0;
}

