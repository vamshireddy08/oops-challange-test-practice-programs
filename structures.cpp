#include<iostream>
using namespace std;

struct student {
int age;
float percentage;
char p;
};
void display(student s)
{
  cout<<"age  "<<s.age<<endl;
  cout<<" pass/fail  "<<s.p<<endl;
  cout<<" percentage "<<s.percentage<<endl;
}
void show(student *s)
{
  cout<<"age  "<<s->age<<endl;
  cout<<"pass/fail   "<<s->p<<endl;
  cout<<"percentage  "<<s->percentage<<endl;
}
int main()
{
student s1,*s11,s2,*s22,s3;
s11=&s1;
s22=&s2;
s3={10,56.90,'p'};
s1.age=10;  s1.percentage=27.36;  s1.p='f';
s22->p='p'; s22->age=11;  s22->percentage=46.98;
cout<<s3.age<<endl;
cout<<s3.percentage<<endl;
display(s1);
show(&s2);
return 0;
}
