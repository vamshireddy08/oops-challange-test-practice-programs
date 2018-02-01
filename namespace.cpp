#include <iostream>
using namespace std;

// first name space
namespace first_space {
   void func() {
      cout << "Inside first_space" << endl;
   }

   // second name space
   namespace second_space {
      void func() {
         cout << "Inside second_space" << endl;
      }
   }
}

using namespace first_space::second_space;  //test with and without this line***
int main () {
   // This calls function from second name space.
   func();
// *** second_space::func( );   first_space::func();
   return 0;
}
