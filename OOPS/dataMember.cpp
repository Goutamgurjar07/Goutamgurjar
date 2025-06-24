/*
Static data member (Variable)
1. for creating static data member we use static
keyword
2. only one copy is create of static data member 
any shared by all
3. it is initialize from zero when the first object
is create of its class 
4. it is not part of any object
*/
#include<iostream>
using namespace std;
class demo
{
    private:
        int a,b;    //normal data member (variable)
        static int z;
    public:
        void getdata(int m , int n)
        {
            a=m;
            b=n;
            z=z+1;
        }
        void display()
        {
            cout<<"a= "<<a<<"\t"<<"b= "<<b<<"\t"<<"z= "<<z<<endl;
        }
};
int demo::z;
int main()
{
    demo aa,bb,cc;
    aa.getdata(10,20);
    bb.getdata(15,36);
    cc.getdata(150,250);
    aa.display();
    bb.display();
    cc.display();
}
