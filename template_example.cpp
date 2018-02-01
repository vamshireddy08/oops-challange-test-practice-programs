#include<iostream>
using namespace std;

template<class  cc>
cc sub(cc a ,cc b){
  return a-b;
}

template<typename t>
t add(t a, t b){
return a+b;
}


int main( ){
int  x,y,z;
float s,t,u;
cout<<"enter 2 integers"<<endl;
cin>>x>>y;
z=add(x,y);
cout<<"ans is "<<z<<endl;
cout<<"enter 2 float"<<endl;
cin>>s>>t;
cout<<"x "<<s<<" y "<<t<<endl;
u=sub(s,t);
cout<<"ans is "<<u<<endl;
return 0;
}
