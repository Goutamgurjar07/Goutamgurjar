
/*
Operator Overloading is one of the most important feature 
of cpp, which is a tye of polymorphism
using the concept of operator overloading we can overload any 
built in operator we can assign definition to an existing
operator
some opereator cannot be overload 
scope resoluction(::)
class member access operator(.)
size of operator
conditional operator 
*/
//arithmetic operator(+)

// opreter overloding- (+)

#include <iostream>
using namespace std;

class add
{
private:
     int a;

public:
     void get()
     {
          cout << "Enter Number:-";
          cin >> a;
     }
     void put()
     {
          cout << "addition = " << a;
     }
     add operator+(add &b) // a+=b  a=a+b
     {
          add sum;
          sum.a = a + b.a;
          return sum;
     }
};
int main()
{
     add aa, bb, cc;
     aa.get();
     bb.get();
     cc = aa + bb;
     cc.put();
}