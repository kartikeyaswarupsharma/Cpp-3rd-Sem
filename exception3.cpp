#include<iostream>
#include<stdexcept>
using namespace std;

class invalidageexception : public exception
{
    public:
    const char * what() const noexcept override
    {
        return "Invalid age, Must be older than 18.";
    }

};

void proccessage(int age){
    if(age < 18){
        throw invalidageexception();
    }


        cout<<"AGE ACCEPTED : "<<age<<endl;
    

}

int main(){
    try 
    {
        int yourage;
        cout<<"Enter Age :"<<endl;
        cin >> yourage;
        proccessage(yourage);
    }
    catch(const invalidageexception& e)
    {
        cerr<<"Exception : "<<e.what()<<endl;
    }
    return 0;

}