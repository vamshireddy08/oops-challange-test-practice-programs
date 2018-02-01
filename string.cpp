#include<iostream>
#include<string>
using namespace std;
int main( ){
  char c[7] {'v','e','r','a','m','a','\0'};
  char arr[]="hello world!";
  cout<<arr<<endl;
  int l =sizeof(c)/sizeof(c[0]);
  cout<<c<<"  length  "<<l<<endl;
  for(int i=0;i<l;i++){cout<<c[i];} cout<<endl;

string s1,s2,s3;
s1="enter 2 strings";
cout<<s1<<endl;
cin>>s2>>s3;
s1=s2+s3;
cout<<"string concatination "<<s1<<endl;
int size=s1.size( );
int length=s2.length( );
cout<<"string length "<<length<<endl;
cout<<"string size "<<size<<endl;
  return 0;
}
