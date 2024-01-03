#include<iostream>
using namespace std;

class shape{
    public:
    virtual void draw() const{
        cout<<"Drawing a shape."<<endl;
    }
    virtual void erase() const{
        cout <<"Erasing a shape."<<endl;
    }
};
class circle : public shape{
    public:
    void draw() const override{
        cout<<"Drawing a circle."<<endl;
    }
    void erase() const override{
        cout<<"Erasing a circle"<<endl;
    }
};
class square : public shape{
    public:
    void draw() const override{
        cout<<"Drawing a square."<<endl;
    }
    void erase() const override{
        cout<<"Erasing a square"<<endl;
    }
};
class polygon : public shape{
    public:
    void draw() const override{
        cout<<"Drawing a polygon."<<endl;
    }
    void erase() const override{
        cout<<"Erasing a polygon"<<endl;
    }
};
int main(){
    circle cc;
    square sq;
    polygon pg;

    shape * shapes[] = {(&cc),(&sq),(&pg)};

    for(const auto& shape : shapes ){
        shape->draw();
        shape->erase();
        cout<<endl;
    }

    return 0;
}