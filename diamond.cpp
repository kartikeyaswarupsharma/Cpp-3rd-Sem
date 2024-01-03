#include <iostream>
using namespace std;
class A {
public:
    int x=2;
    A () {
        cout<<x<<endl;
    }
};

class B : virtual public A {
public:
    int y=3;
    B() {
        cout<<y<<endl;
    }
};

class C : virtual public A {
public:
    int z=4;
    C() {
        cout<<z<<endl;
    }
};

class D : public B, public C {
public:
    D() {
        
    }
};

int main() {
    D obj;
    return 0;
}