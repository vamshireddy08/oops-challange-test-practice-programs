#include<iostream>
#include<fstream>
using namespace std;

int main( ){
  char file_name[20];
  cout << "Enter the file_name ";
  cin >> file_name;
  ifstream in_stream;
  in_stream.open(file_name);
  if (in_stream.fail( ) )
  {             cout << "Input file opening failed.\n";
            exit(1);
          } else  cout<<"success in opening file "<<endl;

 ofstream out; out.open("vamshireddy1.dat",ios::app);
out<<endl<<"new data "<<endl;
return 0;
}
