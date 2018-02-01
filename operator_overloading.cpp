#include <iostream>
using namespace std;

class Box {
   public:
friend void print_parameters(Box b ); //friend function
      Box(double len,double bre, double hei): length(len){
       breadth=bre; height=hei;
   }
    Box( ){ length=0;  breadth=0; height=0;}
      double getVolume(void) {
         return length * breadth * height;
      }
      void setLength( double len ) {
         length = len;
      }
      void setBreadth( double bre ) {
         breadth = bre;  }
      void setHeight( double hei ) {
         height = hei; }

      // Overload + operator to add two Box objects.
      Box operator+(const Box& b) {
         Box box;
         box.length = this->length + b.length;
      //   cout<<"which value" <<this->length<<endl;
         box.breadth = this->breadth + b.breadth;
         box.height = this->height + b.height;
                  return box;
      }
      Box operator-( ){
         length= -length;
        breadth= -breadth; height=-height;
        //cout<<"length "<<length<<endl;
        return Box(length,breadth,height);
      }
      void operator++( ){       //prefix increment operator overloading
         length=length*length;  ++breadth;    ++height;
      }
      void operator--(int ){       //post decrement operator overloading
         length--;  breadth--;    height--;
         cout<<"length for post decrement "<<length<<endl;
      }
      void operator--( ){       //prefix decrement operator overloading
        -- length;  --breadth;    --height;
      }
      void operator=(const Box &b){
        length=b.length;
        breadth=b.breadth;  height=b.height;
      }
bool compare( Box b)    //this function
{
  return  this->getVolume( ) > b.getVolume( );
}
void inc10( )
{
  this->length= this->length +10;
}
   private:
      double length;      // Length of a box
      double breadth;     // Breadth of a box
      double height;      // Height of a box
};

void print_parameters(Box b ){
  cout<<"length "<<b.length <<"   breadth"<<b.breadth<<"    height"<<b.height<<endl;
}
// Main function for the program
int main() {
   Box Box1;                // Declare Box1 of type Box
   Box Box2;                // Declare Box2 of type Box
   Box Box3;                // Declare Box3 of type Box
   double volume = 0.0;     // Store the volume of a box here
   // box 1 specification
   Box1.setLength(6.0); Box1.setBreadth(7.0); Box1.setHeight(5.0);
   // box 2 specification
      Box2.setLength(12.0); Box2.setBreadth(13.0); Box2.setHeight(10.0);
   // volume of box 1
   volume = Box1.getVolume();
   print_parameters(Box1 );
   cout << "Volume of Box1 : " << volume <<endl;
   // volume of box 2
   volume = Box2.getVolume();
   print_parameters(Box2);
   cout << "Volume of Box2 : " << volume <<endl;
   // Add two object as follows:
   Box3 = Box2 + Box1;
   // volume of box 3
   volume = Box3.getVolume();
   print_parameters(Box3 );
   cout << "Volume of Box3 : " << volume <<endl;
   -Box1;   //unary operator overloading
  print_parameters(Box1 );
   Box1.inc10();
   print_parameters(Box1 );
   if(Box1.compare(Box3))
   cout<<"box1 volume is greater than box3"<<endl;
   else
   cout<<"box3 volume is greater than box1"<<endl;
cout << "Volume of Box1 : " << Box1.getVolume() <<endl;
  ++Box1; cout<<" overloading increment operator "<<endl;
print_parameters(Box1 );
Box2--;
print_parameters(Box2 );
Box1=Box3;
print_parameters(Box1 );
   return 0;
}
