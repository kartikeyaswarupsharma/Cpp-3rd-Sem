#include<iostream>
using namespace std;

class Example{
    public:
    int PublicVar;
    void PublicMethod(){
        cout<<"Inside Public Method"<<endl;
    }

    private:
    void PrivateMethod(){
        cout<<"Inside Private Method"<<endl;
    }

    protected:
    int ProtectedVar = 20;
    void ProtectedMethod(){
        cout<<"Inside Protected Method"<<endl;
    }
};
class ExampleTwo : public Example{
    public:
    void MethodofDerived(){
        cout<<ProtectedVar;
        cout<<endl;

        ProtectedMethod();
        cout<<endl;
    }
};

int main(){
    Example obj;
    obj.PublicVar = 10;
    cout<<obj.PublicVar;
    cout<<endl;
    obj.PublicMethod();
    cout<<endl;

    // Example obj;                 error
    // obj.PrivateMethod();         error
    
    ExampleTwo obj2;
    obj2.MethodofDerived();


    return 0;

}