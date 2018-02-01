#include<iostream>
#include<iomanip>
using namespace std;
enum directions{north,south=11,east,west};

int main( ){
 directions d;
 d=east;
  cout<<"north "<<north<<endl;
  cout<<"south "<<south<<endl;
  cout<<"east "<<east<<endl;
  cout<<"west "<<west<<endl;
  cout<<"d=east "<<d<<endl;

  for(int i=70;i<75;i++){cout<<i<<" . "<< (char)i <<endl;}
  cout<< char ( 365 ) <<"\n";
   cout<< static_cast<char> ( 65 ) <<"\n";


   int x=121,y=12;
  // double d;
   float f=x/y,f1=44.231235;

   cout<<setprecision(7) <<f<<endl;
   cout <<setprecision(7) <<f1;
  return 0;
}
