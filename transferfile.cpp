#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream sourcefile("C:/Users/OneDrive/Desktop/Hello.txt");
    ofstream destfile("C:/Users/OneDrive/Desktop/hello2.txt");

    if (!sourcefile.is_open() || !destfile.is_open()) {
        cerr << "Error opening files." << endl;
        return 1;
    }
    string data;
    while (getline(sourcefile,data)) {    
        destfile << data << endl;
    }
    cout << "Data transferred successfully." << endl;
    sourcefile.close();
    destfile.close();
    return 0;
}
