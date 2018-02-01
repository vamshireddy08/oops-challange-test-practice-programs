#include<iostream>
#include<string>
using namespace std;
struct login{
  string username,password;
};
struct address{
  float hno;
  string street,city,country;
  long zip;
};
struct student{
  int rollno,age; string name;    address addr; login *ptr;
}s1, *s2;
void display(student s)
{
  cout<<"id  "<<s.rollno<<endl;
  cout<<" name  "<<s.name<<endl;
  cout<<" home number "<<s.addr.hno<<endl;
  cout<<" street "<<s.addr.street<<endl;
  cout<<" city "<<s.addr.city<<endl;
  cout<<" country "<<s.addr.country<<endl;
  cout<<" zip  "<<s.addr.zip<<endl;
  cout<<"username "<<s.ptr->username<<endl;
  cout<<"password "<<s.ptr->password<<endl;

}
int main( ){  login l1={"u","p"};   s2=&s1;
  s1.ptr= &l1;

 s1.rollno=10;  s1.name="vamshireddyveramareddy"; s1.addr.hno=20.4;   s1.addr.zip=102030;
 s2->age=10;  s2->addr.street="wood side Ln"; s2->addr.city="san jose, CA";
 //display(s1);
 s1.ptr->username="vamshi.verama@gmail.com";
 s2->ptr->password="go_to_hell";
//display(s1);
cout<<"size of this structure "<<sizeof(s1)<<endl;
cout<<"size of this structure "<<sizeof(s1.name)<<endl;
cout<<"size of this structure "<<sizeof(s1.ptr->username)<<endl;

  return 0;
}
