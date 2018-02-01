#include<iostream>
using namespace std;

int main( ){

int i=0;
char c;
float f;
double d;
signed int si;
unsigned int ui;
long int li;
short int shi;
long unsigned int lui;
long signed int lsi;
short signed int ssi;
short unsigned int sui;
//long char lc;
//short char shc;
signed char sc;  unsigned char uc;
string s="vamshi";

cout<<"hello ";
cout << " int " << sizeof(i) <<" char "<<sizeof(c)<<" float "<<sizeof(f)<<"  double "<<sizeof(d)<<"  signed int "<<sizeof(si)<<" unsigned int "<<sizeof(ui)<<" string "<<sizeof(s)<<"  long int "<<sizeof(li)<<" short int "<<sizeof(shi)<<endl;
cout<<"   long unsigned int " << sizeof(lui) <<"  long signed int " << sizeof(lsi) <<"  short signed int " << sizeof(ssi) <<" short unsigned int " << sizeof(sui) <<" signed char " << sizeof(sc) <<"  unsigned char " << sizeof(uc) <<" ";

while(i<10)
{ i++;
  if(i==5)
  continue;
  else
  cout<<i<<endl;


}
  return 0;
}
