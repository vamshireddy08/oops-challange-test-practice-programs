#include<iostream>
using namespace std;
int main()
{
float array[] {30.6,43.7,50.05,63.36};
float *ptr,*p2;
ptr=&array[0];
p2=array;
cout<<p2<<endl;
cout<<*p2<<endl;
cout<<*(p2+4)<<endl;
cout<<*ptr<<endl;
ptr++;
cout<<*ptr<<endl;
cout<<*(ptr+1)<<endl;
cout<<array<<endl;
cout<<*array<<endl;
cout<<*(array+3)<<endl;
  return 0;
}
