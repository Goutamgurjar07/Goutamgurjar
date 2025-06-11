/*
Inheritance - Inheritance is one of the most important feature 
of object oriented programming , by the concept of inheritance 
we can reuse the pre-existing code in a new project /software
it is always better to reuse the pre-existing code rather all over
developing again
*/
/*
there are 5 types of Inheritance
1. single Inheritance
2. multiple Inheritance
3. multilevel Inheritance
4. hierarchical Inheritance
5. hybrid Inheritance
*/
//1. single Inheritance

// #include<iostream>
// using namespace std;
// class A
// {
//     protected:
//         int a;
//     public:
//         void get()
//         {
//             cout<<"Enter Value of a = ";
//             cin>>a;
//         }
// };

// class B : public A
// {
//     protected:
//        int  b;
//     public:
//         void get1()
//         {
//             cout<<"Enter Value of b =";
//             cin>>b;
//         }
//         void show()
//         {
//             cout<<a+b;
//         }
// };
// int main()
// {
//     B aa;
//     aa.get();
//     aa.get1();
    
//     aa.show();
// }


//2. multiple Inheritance


// #include<iostream>
// using namespace std;
// class A
// {
//     protected:
//         int a;
//     public:
//         void geta()
//         {
//             cout<<"Enter Value of a = ";
//             cin>>a;
//         }
// };
// class B : public A
// {
//     protected:
//        int  b;
//     public:
//         void getb()
//         {
//             cout<<"Enter Value of b =";
//             cin>>b;
//         }
       
// };
// class C : public B
// {
   
//     public:
//         void show()
//         {
//             cout<<a+b;
//         }
// };

// int main()
// {
//      C aa;
//     aa.geta();
//     aa.getb();
    
//     aa.show();
// }




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