#include<iostream>
#include<stdexcept>
using namespace std;

class NationException : public exception{
    public:
    const char * what() const noexcept override{
        return "The string enterd should be : jai hind or JAI HIND";
    }
};
void CheckString(const string& input){
    if (input != "jai hind" && input != "JAI HIND")
    {
        throw NationException();
    }
    
}

int main(){
    try
    {   
        string UserInput;
        cout << "Enter Slang : "<<endl;
        getline(cin,UserInput);

        CheckString(UserInput);
        cout << "ACCEPTED SLANG, You Entered : "<<UserInput<<endl;

    }
    catch(const NationException& e)
    {
        cerr<<"NationException caught : "<<e.what()<<endl;
    }

    return 0;
    
}
