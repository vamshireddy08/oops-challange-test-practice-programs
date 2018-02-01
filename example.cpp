#include<iostream>
using namespace std;
int main()
{
  int *p=0;
int x=3,y=6;
cout<<"value of p "<<p<<endl;
cout<<"address of p "<<&p<<endl;
p=&x;
cout<<"value of x "<<x<<endl;
cout<<"value of y "<<y<<endl;
cout<<"address of x "<<&x<<endl;
cout<<"value of p "<<p<<endl;
cout<<"address of p "<<&p<<endl;
cout<<"value pointed by pointer "<<*p<<endl;
*p=y;
cout<<"value of x "<<x<<endl;
//cout<<"value of y "<<y<<endl;
cout<<"value of p "<<p<<endl;
cout<<"address of p "<<&p<<endl;
cout<<"value pointed by pointer "<<*p<<endl;
return 0;
}
