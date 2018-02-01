#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int y = 6;
    int *p;
      int &r = x;

    p =  &x;
    cout << &p << " " << &x << endl;    // 4. Different address
    cout << &r << " " << &x << endl;    // 4. Same address
cout << *p<<endl;
cout <<r<<endl;
    p = &y;                     // 1. Pointer reintialization allowed
    cout << p << endl;        // 6. Prints the address
      cout << r << endl;        // 6. Print the value of x

    // &r = y;                  // 1. Compile Error
    r = y;                      // 1. x value becomes 6
    p = NULL;
    // &r = NULL;               // 2. Compile Error
    p++;                        // 3. Points to next memory location
    r++;                        // 3. x values becomes 7
    cout << p << endl;        // 6. Prints the address
      cout << r << endl;        // 6. Print the value of x

    return 0;
}
