#include<iostream>
using namespace std;

class Draw{
    public:
    void WithPen(){
        cout<<"Draw with pen"<<endl;
    }
};
class colour{
    public: 
    void WithBrush(){
        cout<<"colour with brush"<<endl;
    }
};
class Art : public Draw , public colour{
    public:
    void paint(){
        cout<<"Paint an art"<<endl;
    }
};

int main(){
    Art mozart;

    mozart.paint();
    mozart.WithPen();
    mozart.WithBrush();

    return 0;
}