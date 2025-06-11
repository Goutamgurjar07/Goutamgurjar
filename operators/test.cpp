#include<iostream>
using namespace std;
class A
{
    protected:
        int a;
    public:
        void geta()
        {
            cout<<"Enter Value of a = ";
            cin>>a;
        }
};
class B 
{
    protected:
       int  b;
    public:
        void getb()
        {
            cout<<"Enter Value of b =";
            cin>>b;
        }
       
};
class C : public A, public B
{
   
    public:
        void show()
        {
            cout<<a+b;
        }
};

int main()
{
     C aa ,bb;
    aa.geta();
    aa.getb();
    
    aa.show();
}