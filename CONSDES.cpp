#include<iostream>
#include<cstring>

using namespace std;

class student{
    private:
    char* name;
    int age;

    public:
    student(const char* name, int age) : age(age){
        this->name= new char[strlen(name)+1];
        strcpy(this->name,name);
        cout<<"Student Name : "<<name<<"Student Age : "<<age<<endl;
    }
    ~student(){
        cout<<"Student :"<<name<<"destroyed."<<endl;
        delete[] name;
    }
    const char* getname(){
        return name;
    }
    int getage(){
        return age;
    }
};
int main(){
    student std1("ankush",19);
    student* std2=new student("avni",18);
    
    cout<<"Student 1 Name : "<<std1.getname()<<"AGE :"<<std1.getage()<<endl;
    cout<<"Student 2 Name : "<<std2->getname()<<"AGE :"<<std2->getage()<<endl;

    delete std2;
    return 0;
}