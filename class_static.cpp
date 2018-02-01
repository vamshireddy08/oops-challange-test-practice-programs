#include<iostream>
using namespace std;

class vamshi{
private: int length;
public: static int count;
  vamshi( ){
    length=23;  count++;
  }
static  void print( ){
    cout<<"length " <<" count "<<count<< endl;
  }
};
int vamshi::count;
int main( ){
  vamshi::print( );
vamshi v1;
v1.print( );
vamshi::print( );
vamshi v2;
vamshi::print( );
vamshi v3;
vamshi::print( );
return 0;
}
