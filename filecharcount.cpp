#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream inputfile("C:/Users/OneDrive/Desktop/Hello.txt");

    if(!inputfile.is_open()){
        cerr<<"Unable to open the file"<<endl;
    }

    int chcount = 0;
    char ch;
    while(inputfile.get(ch)){
        chcount++;
    }

    cout<<"The number of character in the file are : "<<chcount<<endl;

    inputfile.close();
    return 0;
}