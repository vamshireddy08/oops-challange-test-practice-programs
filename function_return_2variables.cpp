#include<iostream>
using namespace std;
struct max_min { int min,max ;} ;
inline min(int a0, int a1) { return (a0 < a1 ? a0 : a1);}
inline max(int a0, int a1) { return (a0 > a1 ? a0 : a1);}
template<class t>
t max(t &a, t &b){
  if(a>b) return a;
  else return b;
}

void minMax(int a1, int a2, int a3, int a4, int a5,max_min *result){
result->min = min(a1,min(a2, min(a3, min(a4, a5))));
result->max = max(a1,max(a2, max(a3, max(a4, a5))));
return ;
}
int main( ){
max_min r;
minMax(1,2,3,4,5,&r);
cout<<r.min<<endl;
cout<<r.max<<endl;
int k=max<int>(22,89);
cout<<" max value "<<k<<endl;
  return 0;
}
