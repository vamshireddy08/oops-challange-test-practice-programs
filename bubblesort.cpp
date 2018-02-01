#include<iostream>
#include<fstream>
using namespace std;
static int count;
void print(float array[],int s,int length)
{
  for(int i=s;i<length;++i)
  { cout<<array[i]<<"  "; }  cout<<endl;
}
void bubblesort(float array[ ],int length ){
float f;
for(int i=0;i<length-1;i++)
{
  for(int j=i+1;j<length;j++)
  {
    if(array[i]>array[j])
    {
      f=array[i]; array[i]=array[j];  array[j]=f;
    }
    count++;
  }
  // print(array,0,10);
}
}

int main( ){
  ofstream out; out.open("vamshireddy.dat");
float array[10]={9,8,7,6,5,4,3,2,1,0};
cout<<"before sorting"<<endl;
print(array,0,10);
bubblesort(array,10);
cout<<"after sorting"<<endl;
print(array,0,10);
cout<<"no.of iterations "<<count<<endl;
  return 0;
}
