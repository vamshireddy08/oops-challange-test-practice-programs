#include<iostream>
using namespace std;
class rectangle{
public: int length,breadth;
  rectangle( ){ length=4;  breadth=7;  }
};

class shape:public rectangle{
public: int area( ){ return length*breadth;   }
};
int main( ){
shape s;
cout<<"area "<< s.area( )<<endl;
s.length=10;
cout<<"area "<< s.area( )<<endl;

return 0;
}
