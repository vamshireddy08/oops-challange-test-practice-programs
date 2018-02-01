#include <iostream>
using namespace std;

int linearSearch(const int a[], int size, int key);

int main() {
   const int SIZE = 8;
   int a1[SIZE] = {8, 4, 5, 3, 2, 9, 4, 1};

   cout <<"return value " <<linearSearch(a1, SIZE, 3) << endl;  // 0
   cout <<"return value " << linearSearch(a1, SIZE, 54) << endl;  // 1
   cout <<"return value " <<  linearSearch(a1, SIZE,9) << endl; // 8 (not found)
}
// Search the array for the given key
// If found, return array index [0, size-1]; otherwise, return size
int linearSearch(const int a[], int size, int key) {
   for (int i = 0; i < size; ++i) {
     cout<<i<<endl;
      if (a[i] == key)
        {
          return i; //break;
   }}
   return -1;
}
