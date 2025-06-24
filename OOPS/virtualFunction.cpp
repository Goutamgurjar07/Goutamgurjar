//this is vir

// # include<iostream>
// using namespace std;
// class A 
// {
//      public:
//      virtual void display()
//      {
//           cout<<"this is virtual function"<<endl;

//      }
// };

// class B:public A
// {
//      public:
//      void display()
//      {
//           cout<<" this is Normal function"<<endl;
//      }
// };
// int main()
// {
//      A *ptr;
//      B aa;
//      ptr =&aa;
//      ptr ->display();
// }

// This is a inline function

# include<iostream>
using namespace std;
class A 
{
     public:
     inline void display()
     {
          cout<<"this is virtual function"<<endl;

     }
};

class B:public A
{
     public:
     void display()
     {
          cout<<" this is Normal function"<<endl;
     }
};
int main()
{
     A *ptr;
     B aa;
     ptr =&aa;
     ptr ->display();
}