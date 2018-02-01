#include<iostream>
using namespace std;
class Pet
{
public:
    virtual void print();
    string name;
private:
};

class Dog: public Pet
{
public:
    void print();
    string breed;
};

void Pet::print()
{
    cout << "My name is " << name;
}

void Dog::print()
{
    Pet::print();
    cout << ", and my breed is a "<< breed << endl;
}
int main( ){
  Dog vDog;
  Pet vPet;

Pet* pPtr;
Dog* dPtr=new Dog;
dPtr->name= "Rover";
dPtr->breed="Weiner";
pPtr= dPtr;
pPtr->print();
vPet=vDog;

return 0; }
