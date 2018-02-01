#include <iostream>     // std::cin, std::cout
#include<string>
using namespace std;
int main () {
  char c,title[26]="enter movie: ", name[26]="enter name: ";
  string s;
  cout<<"enter one character "<<endl;
  cin.get(c);
  std::cout.write(name,26);
  cin.ignore( );
  std::cin.getline (name,26);  //this is used for character array

  std::cout.write(title,26) ;

cin.get(title,26,'t'); //cin.get(string_name, string_length+1(one for indicating end character))
cout<<"enter some random text "<<endl;
cin.ignore(1,' ');
getline(cin,s);  //this is used for string
  std::cout <<"one char "<<c <<"  "<< name << "'s favourite movie is " << title <<"  getline(cin,s) "<<s;

  return 0;
}
