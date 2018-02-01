#include <iostream>
using namespace std;

int main()
{
char name[] = "Philip";
char name2[6];
int i;
for (i = 0; i < 6; i++)
{
name2[i] = name[i];
}
cout << name2 << endl;
int ch = 100;
int *ptr = &ch;
cout << "Value stored at pointer ptr is: " << *ptr << endl;
return 0;
}
