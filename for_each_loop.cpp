#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main( ){
int arr[ ]={1,2,3,7,4,5,6,78,9,10};
/*
for(datatype  variable : array/collection){}

here the variable is of same datatype as array
loop is executed for n times: where n is the length of array
in 1st loop variable contains arr[0]
in 2nd loop variable contains arr[1] and so on....   till the end of array
in each iteration variable has one of the value of array
*/
for(int var : arr){
  cout<<var<<endl;
}
string name="vamshi",last="reddy";
cout<<name <<" "<<last<<endl;
cout<<name+last<<endl;
string full=name+last;
cout<<full<<endl;
return 0;
}
