#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    const string inputfile("C:/Users/OneDrive/Desktop/Hello.txt");
    const string outputfile("C:/Users/OneDrive/Desktop/Hello2.txt");

    ifstream infile(inputfile);
    ofstream outfile(outputfile);

    
    if(!infile.is_open()){
        cerr<<"Unable to open the file"<<endl;
    }
    
    if(!outfile.is_open()){
        cerr<<"Unable to open the file"<<endl;
    }

    char ch;

    while(infile.get(ch)){
        if(isalpha(ch)){
            if(islower(ch)){
                ch=toupper(ch);
            }
            else    
            {
                ch=tolower(ch);
            }
        }
    outfile.put(ch);
    }

    cout<<"the content of the file was transfered after changing the case."<<endl;

    infile.close();
    outfile.close();
    return 0;
}