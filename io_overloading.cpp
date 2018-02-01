#include<iostream>
using namespace std;
class over{
private: float f=10;
public: friend ostream &operator<< (ostream& output1, const over &o)
{
  output1<<o.f<<endl; return output1;
}
friend istream &operator>> (istream& input1, over &o)
{
 input1 >> o.f; return input1;
}

};

int main( ){
over o1,o2;
cout<<o1;
cin>>o2;
cout<<o2;

return 0;
}
