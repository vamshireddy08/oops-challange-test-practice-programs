#include<iostream>
using namespace std;

template<typename u>
void print(u arr[ ],int length){
for(int i=0;i<length;i++){
  cout<<arr[ i]<<" ";
}
  cout<<endl;
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
} }

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
int arr[ ]={9,12,6,13,25,4,15,7,1,3,19,1,2,3,4,5,6,7,8,9,0};
cout<<"before sorting "<<endl;
int len= sizeof(arr)/sizeof(arr[0]);
print(arr,len);
cout<<"after sorting "<<endl;
heapsort(arr,len);
print(arr,len);
return 0;
}
