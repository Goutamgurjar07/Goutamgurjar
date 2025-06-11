#include <iostream>
using namespace std;

// Base class
class A {
protected:
    int a;
public:
    void getA() {
        cout << "Enter value for a: ";
        cin >> a;
    }
    void showA() {
        cout << "Value of a: " << a << endl;
    }
};

// Derived class B inherits from A
class B : public A {
protected:
    int b;
public:
    void getB() {
        cout << "Enter value for b: ";
        cin >> b;
    }
    void showB() {
        cout << "Value of b: " << b << endl;
    }
};

// Derived class C inherits from A
class C : public A {
protected:
    int c;
public:
    void getC() {
        cout << "Enter value for c: ";
        cin >> c;
    }
    void showC() {
        cout << "Value of c: " << c << endl;
    }
};

int main() {
    B objB;
    C objC;

    cout << "Input for object B:" << endl;
    objB.getA();
    objB.getB();

    cout << "Input for object C:" << endl;
    objC.getA();
    objC.getC();

    cout << "\nDisplaying values for object B:" << endl;
    objB.showA();
    objB.showB();

    cout << "\nDisplaying values for object C:" << endl;
    objC.showA();
    objC.showC();

    return 0;
}
