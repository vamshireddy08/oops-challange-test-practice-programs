#include <iostream>
using namespace std;

void print(float array[],int s,int length)
{
  for(int i=s;i<length;++i)
  { cout<<array[i]<<"  ";}  cout<<endl;
}

void insertionsort(float array[ ],int length){
float temp;
for(int i=1;i<length;++i)
{
  for(int j=0;j<i;++j){
if (array[i]<array[j]) {  temp=array[i];
  for(int shift=i;shift>j;shift--){ array[shift]=array[shift-1]; }
   array[j]=temp; break;
          }
  }
}
}

int main( ){
float array[10]={3,8,4,7,1,0,5,9,2,6};
cout<<"before sorting"<<endl;
print(array,0,10);
insertionsort(array,10);
cout<<"after sorting"<<endl;
print(array,0,10);
  return 0;
}
