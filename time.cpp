#include<iostream>
#include<conio.h>
using namespace std;
class Time
{
int hrs,min,sec;
public: Time()
    {
        hrs=0;min=0;sec=0;
    }
Time(int a,int b,int c)
{
hrs=a; min=b;sec=c;
}
void addTime(Time tt1,Time tt2)
{
sec=tt1.sec+tt2.sec;
min=sec/60;
sec=sec%60;
min=min+tt1.min+tt2.min;
hrs=min/60;
min=min%60;
hrs=hrs+tt1.hrs+tt2.hrs;
}
void display()
{
cout<<hrs<<":"<<min<<":"<<sec<<endl;
}
};
int main()
{

Time t1(10,48,30);
Time t2(2,22,35);
Time t3;
t3.addTime(t1,t2);
cout<<"\nTime 1 is :";
t1.display();
cout<<"\nTime 2 is :";
t2.display();
cout<<"\nTime 1 + Time 2 is :";
t3.display();
getch();
return(0);
}

