#include <iostream>
using namespace std;
int fun( ){
int value=111;
return value;

}
void dispalay( ){

  cout<< fun::value <<endl;
}
int main () {
  int x = 10;
  int y = 20;
  if(x==10)
  {
    int x;   // ok, inner scope.
    x = 50;  // sets value to inner x
    y = 50;  // sets value to (outer) y
    cout << "inner block:\n";
    cout << "x: " << x << '\n';
    cout << "y: " << y << '\n';
  }
  cout << "outer block:\n";
  cout << "x: " << x << '\n';
  cout << "y: " << y << '\n';
  display( );
  return 0;
}
