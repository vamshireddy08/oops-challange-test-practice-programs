#include<iostream>
#include<string>
using namespace std;

int main( ){
  string *s;  s=new string[10];
int *ptr;
float *pp;
pp= new (nothrow) float(10.123);
cout<<*pp<<endl;
ptr=new (nothrow) int[10];
  cout<<ptr<<endl;
  if(ptr== nullptr){cout<<"error: can't allocate this much memory "<<endl ;}
  else  {
for(int i=0;i<10;i++)
{ ptr[i]= (5*i*i) +(8*i)+23; }
for(int i=0;i<10;i++)
{ cout<< *(ptr+i) <<endl; } }
delete []ptr;
delete []pp;  delete []s;
return 0;
}
