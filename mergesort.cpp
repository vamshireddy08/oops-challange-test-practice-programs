#include<iostream>
using namespace std;

void print(int arr[ ],int len)
{
  for(int i=0;i<len;i++) {  cout.width(4);
  cout<<arr[i]<<" ";}
  cout<<endl;
}

void merge(int arr[ ],int l,int m,int r)
{
    int l1=m-l+1; //length of left-side array
  int l2=r-m;   //length of right-side array
  int a1[l1],a2[l2];  //creating temporary arrays to hold the data
  for(int i=0;i<l1;i++)   // stores left half from l to m
  a1[i]=arr[l+i];

  for(int j=0;j<l2;j++)   //stores right half from m+1 to r
  a2[j]=arr[m+1+j];
int i=0,j=0,k=l;
  while(i<l1 && j<l2)
  {
    if(a1[i] > a2[j])
    {
      arr[k]=a1[i]; i++;
    }
    else
    {
      arr[k]=a2[j]; j++;
    }
    k++;
  }
  while(i<l1){ arr[k]=a1[i]; i++;k++;}
  while(j<l2){ arr[k]=a2[j]; j++;k++; }
}


void mergesort(int arr[ ],int l,int r)
{ int m;
  if(l<r){

    m=(l+r)/2;
    mergesort(arr,l,m);

    mergesort(arr,m+1,r);

    merge(arr,l,m,r);
      }
else return;
}

int main(){
int arr[ ]={23,78,91,3,1,2,3,4,5,6,7,8,9,10,11,12};
int len=sizeof(arr)/sizeof(arr[0]);
cout<<"length of array "<<len<<endl;
cout<<"before sorting "<<endl;
print(arr,len);
  mergesort(arr,0,len-1);
  cout<<"after sorting "<<endl;
  print(arr,len);
return 0;
}
