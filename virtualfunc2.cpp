#include<iostream>
#include<vector>
using namespace std;

class animal{
    public:
    virtual void sound(){
        cout<<"sounds of animals"<<endl;
    }
};
class dog : public animal{
    public:
    void sound(){
        cout<<"Barks"<<endl;
    }
};
class cat : public animal{
    public:
    void sound(){
        cout<<"MEOWS"<<endl;
    }
};
class bird : public animal{
    public:
    void sound(){
        cout<<"Chirps"<<endl;
    }
};
int main(){
    vector<animal*> animals;

    animals.push_back(new dog());
    animals.push_back(new cat());
    animals.push_back(new bird());

    for(auto animal : animals){
        animal->sound();
    }

    for(auto animal:animals){
        delete animal;
    }
    
    

    return 0;
}

