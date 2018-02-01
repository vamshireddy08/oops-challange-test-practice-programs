#include<iostream>
using namespace std;

void swap(int &x,int &y)
{int t=x;   x=y;    y=t;    }

int sort(int array[],int left, int right)
{
  int pivot=array[right],j=left;
  for(int i=left;i<right;++i)
  {
      if(array[i]<pivot)
        {
          if(j!=i)
          {
            //cout<<"i "<<i<<" j "<<j<<endl;
            swap(array[j],array[i]);
            }
               j++;
          }
      }
  swap(array[right],array[j]);
  return j;
}

void quicksort(int array[], int left, int right)
{
  if(left<right)
  {
    int pivot_position=sort(array,left,right);
    quicksort(array,left,pivot_position-1);
    quicksort(array,pivot_position+1,right);
      }
      else return;
}

void print(int array[])
{
  for(int i=0;i<12;i++)
  { cout<<array[i]<<"  ";}  cout<<endl;
}

int main( ){
int array[12]={12,11,10,9,8,7,6,5,4,3,2,1};
int length=sizeof(array)/sizeof(array[0]);
print(array);
quicksort(array,0,length-1);
print(array);
  return 0;
}
