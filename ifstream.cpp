#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    const string filename = ("C:/Users/OneDrive/Desktop/Hello.txt");

    ifstream file(filename);
    
    if(!file.is_open()){
        cerr<<"Error opening the file"<<filename<<endl;
    return 1;
    }

    string line;

    while (getline(file,line))
    {
        cout<<line<<endl;
    }
    file.close();

    return 0;
}