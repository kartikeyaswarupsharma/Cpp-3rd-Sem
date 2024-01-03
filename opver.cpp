#include<iostream>
using namespace std;
class myclass{
    private: 
    int value;
    public:
    myclass() : value(0) {}

    myclass(int val) : value(val) {}

    int getvalue()const{
        return value;
    }
    friend myclass operator*(const myclass& obj1,const myclass& obj2);

};
myclass operator*(const myclass& obj1,const myclass& obj2){
    return myclass(obj1.value * obj2.value);
}
int main(){
    myclass obj1(5);
    myclass obj2(3);

    myclass result = obj1*obj2;

    cout<<"Result : "<<result.getvalue()<<endl;
}