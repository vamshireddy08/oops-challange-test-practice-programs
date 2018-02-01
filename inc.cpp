#include<iostream>
using namespace std;
int y=0;

class vamshi {
private: int x=0; float z;  static int count;
public: vamshi(){ z=10.10;  cout<<"constructor is called:"<<endl; count++;
cout<<"static count value "<<count<<endl; }
void print( ){
  cout<<"x "<<x<<" z "<<z<<endl;
}
~vamshi( ){
cout<<"destructor is called "<<endl;

}
};
int vamshi::count=0;
void test( )
{
  vamshi t;
  t.print( );

}
int main( ){
int pre=0,post=0,j=0;
vamshi v;
v.print();
test( );
for(j; j<3;j++)
{
  y++;
cout<< y<<"   ";

if(y==3){
cout<<"prefix  "<< ++pre<<"  post value "<<post++<<endl;  }
else
cout<<"not executed "<<endl;

}
vamshi v1;
return 0;
}
