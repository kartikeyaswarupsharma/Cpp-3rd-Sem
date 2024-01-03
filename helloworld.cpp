#include <iostream>
using namespace std;
class A {
public:
    A() {
        cout << "A Constructor Called!" << endl;
    }
};


class B : public A {
public:
    B() {
        cout << "B Constructor Called!" << endl;
    }
};

int main() {

    B objB;

    return 0;
}