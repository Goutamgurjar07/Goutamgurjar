/*
Static member function(function)-
1. For creating static member function we use static 
keyword
2. static member function can access only 
static data member 
3. static member function in not be part of any object 
so its call using class name
*/
#include<iostream>
using namespace std;
class demo
{
    private:
        int a,b;    //normal data member (variable)
        static int z;
    public:
        void getdata(int m , int n) //normal member function
        {
            a=m;
            b=n;
            z=z+1;
        }
        void display() //normal member function
        {
            cout<<"a= "<<a<<"\t"<<"b= "<<b<<"\t"<<"z= "<<z<<endl;
        }
        static void xyz() //static member function
        {
            cout<<"z= "<<z<<endl;   
        }
};
int demo::z;
int main()
{
    demo aa,bb,cc,dd;
    aa.getdata(10,20);
    bb.getdata(15,36);
    cc.getdata(150,250);
    dd.getdata(800,600);
    aa.display();
    bb.display();
    cc.display();
    dd.display();
    demo::xyz();
}


