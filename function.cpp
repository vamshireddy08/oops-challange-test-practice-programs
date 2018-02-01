#include<iostream>
using namespace std;
void original(int x,int y,int z){x=x+100;y=y+100;z=z+100;}
void duplicate(int &x,int &y,int &z) {x=x*3;y=y*3;z=z*3;}
int main(){
int x=3,y=5,z=11;
original(x,y,z);
cout<<x<<" "<<y<<"  "<<z<<endl;
duplicate(x,y,z);
cout<<x<<" "<<y<<"  "<<z<<endl;
  return 0;
}
