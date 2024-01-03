#include<iostream>
#include<stdexcept>
using namespace std;

int divide(int num,int denom){
    if(denom == 0){
        throw runtime_error("Cannot divide by 0");
    }
    return num/denom;
}
int main(){
    try
    {
        int result=divide(4,2);
        cout<<result<<endl;
        // int invalidresult=divide(2,0);
        
    }
    catch(const exception& e)
    {
        cerr << e.what() << endl;
    }
    
}