#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
    int z = x;    x = y;    y = z;
    cout<<" x value as address or value "<<x<<endl;
}

void swap1(int *p,int *q)
{
  int r=*p;  *p=*q;*q=r;
}

int main()
{
    int a = 45, b = 35;
    cout << "Before Swap\n";
    cout << "a = " << a << " b = " << b << "\n";
    swap(a, b);
     cout << "After Swap with pass by reference\n";
      cout << "a = " << a << " b = " << b << "\n";
      swap1(&a,&b);
      cout << "After Swap with pass by reference using pointer\n";
       cout << "a = " << a << " b = " << b << "\n";
float x;
x=15/4;
cout<<" float value is "<<x<<endl;
}
