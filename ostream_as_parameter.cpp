#include<iostream>
using namespace std;

class Person
{
public:
	void outputPerson(ostream& out);
private:
        int age;
        float weight;
        int id;
};

void Person::outputPerson(ostream& out)
{
	out << age << weight << id;
}

int main( ){
ostream *o1;
Person p1;
o1=&p1;
p1.outputPerson(o1);
return 0;
}
