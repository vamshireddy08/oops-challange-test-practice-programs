#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void display_tree(int arr[ ],int length)
{ int k=0,level,w;
    bool t=0;
   level= ceil( log(length)/log(2));
   cout<<"level "<<level<<endl;
for(int i=0;i<=level;i++){
  t=0;
  for(int j=0;( (j< pow(2,i)) && (k<length));j++){
    w= 16*(2*j + 1)/pow(2,i) - t*(16*(2*(j-1) + 1)/pow(2,i) );
cout<<setw(w)<<arr[k];  k++; t=~t;

} cout<<endl;
}
}

template<class t>
void heapsort_max(t arr[ ],int length){
int swap;     t temp;
 for(int k=(length-1);k>0;k=k/2) {          //calls binary sorting n times, where n is the height of root

for(int i=length-1;i>0;i=i-2){          //start from last element

int a=i, b, c=(i-1)/2;

if(length%2 ==0 && i== length-1 ) b=a;      //check if last element  it is left child or right child
else  b=i-1;

swap=(arr[a]>arr[b])?(arr[a]>arr[c]?a:c ):( arr[b]>arr[c]? b:c ); //compares and finds maximum element position

if(swap!=c){
  temp=arr[c];    arr[c]=arr[swap]; arr[swap]=temp; }  //swaps the parent and a child

  if(length%2 ==0 && i== length-1 ) ++i;   //now repeates procedure for next right child in reverse direction
}
}}


template<class t>
void heapsort(t arr[ ],int length)
{ int p=length-1;
  if(length>1){               //just check if any portion of array is left to sort
heapsort_max(arr,p+1);        //if yes then call binary tree which will place max element at the root
t temp;
temp=arr[0];    arr[0]=arr[p];  arr[p]=temp;    //swap root element and last unsorted element
heapsort(arr,p);                                //call sorting function again to check any unsorted elements
}
 }

int main( ){
  int arr[ ]={9,12,6,13,25,4,15,7,1,3,19};
int len= sizeof(arr)/sizeof(arr[0]);
cout<<"before sorting "<<endl;
display_tree(arr,len);
heapsort(arr,len);
cout<<"after sorting "<<endl;
display_tree(arr,len);
return 0;
}
