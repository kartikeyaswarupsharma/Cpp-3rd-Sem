#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    string name, address, mobile;
    int age;

    cout<<"Enter Name :"<<endl;
    getline(cin,name);

    cout<<"Enter Age :"<<endl;
    cin>>age;
    cin.ignore();

    cout<<"Enter Address :"<<endl;
    getline(cin,address);

    cout<<"Enter Mobile Number :"<<endl;
    getline(cin,mobile);

    string filename = ("C:/Users/OneDrive/Desktop/Hello.txt");
    ofstream outfile(filename);

    if(!outfile.is_open()){
        cerr<<"Unable to open file"<<endl;
        return 1;
    }

    outfile<<name<<endl;
    outfile<<age<<endl;
    outfile<<address<<endl;
    outfile<<mobile<<endl;

    outfile.close();


    ifstream infile(filename);

    if(!infile.is_open()){
        cout<<"Unable to open file"<<endl;
        return 1;
    }

    string readname, readaddress, readmobile;
    int readage;

    getline(infile,readname);
    infile>>age;
    infile.ignore();
    getline(infile,readaddress);
    getline(infile,readmobile);

    cout<<readname<<"###"<<readage<<"###"<<readaddress<<"###"<<readmobile<<endl;

    cout<<readmobile<<"---"<<readaddress<<"---"<<readage<<"---"<<readname<<endl;



    return 0;
}