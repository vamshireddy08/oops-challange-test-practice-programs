#include <iostream>
using namespace std;

void print(float array[],int s,int length)
{
  for(int i=s;i<length;++i)
  { cout<<array[i]<<"  ";}  cout<<endl;
}
void selectionsort(float array[ ],int length){
float temp; int k;
for(int i=0;i<length-1;++i)
{
  k=i;
  for(int j=i+1;j<length;++j){
if (array[k]>array[j]) {
    k=j;
}
}   temp=array[i]; array[i]=array[k];  array[k]=temp;
}
}

int main( ){
float array[10]={3,8,4,7,1,0,5,9,2,11};
cout<<"before sorting"<<endl;
print(array,0,10);
selectionsort(array,10);
cout<<"after sorting"<<endl;
print(array,0,10);
  return 0;
}
