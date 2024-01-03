#include <iostream>
using namespace std;

class A {
public:
    virtual void x() const = 0;
    virtual void y() const {
        cout << "Y" << endl;
    }
};

class B : public A {                                //call with the help of a pointer
public:
    void x() const override {
        cout << "inside A" << endl;
    }
    void y() const override {
        cout << "inside B" << endl;
    }
};

int main() {
    B obj;
    obj.x();
    obj.y();

    return 0;
}
