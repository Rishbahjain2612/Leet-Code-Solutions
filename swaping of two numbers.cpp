#include <iostream>
using namespace std;
int main(){
int a ,b ,c;
cout<<"enter the value of    a=";
cin>>a;
cout<<"enter the value of    b=";
cin>>b;
cout<<"a="<<a;
cout<<"  b="<<b << endl ;
c=b;
b=a;
a=c;
cout<<"a="<<a<<"  b="<<b;
return 0;
}
