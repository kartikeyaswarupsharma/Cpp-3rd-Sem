#include<iostream>
#include<stdexcept>
#include<string>

using namespace std;

class invalidemailexception : public exception
{
    public:
    invalidemailexception() : exception("Invalid Email ID");
};

void validate(const string& email){
    size_t Symbol = email.find("@");
    if(Symbol == string::npos){
        throw invalidemailexception();
    }
}
int main(){
    try{
        string email;
        cout<<"Enter your email id :"<<endl;
        cin>>email;

        validate(email);

        cout<<"Email ID is valid :"<<email<<endl;
    }
    catch(const invalidemailexception& e){
        cerr<<"Exception caught :"<<e.what()<<endl;
    }
    return 0;
}