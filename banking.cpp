#include<iostream>
#include<string>

using namespace std;

class account{
    protected:
    string accountnumber;
    double balance;

    public:
        account(const string & accnumber, double initialbalance):accountnumber(accnumber),balance(initialbalance){}

        virtual void deposit(double amount){
            balance += amount;
            cout<<"deposited rupees :"<<amount<<" into acccount : "<<accountnumber<<endl;
        }

        virtual void withdraw(double amount){
            if(balance >= amount)
            {
                balance-=amount;
                cout<<"Withdrawn rupees :"<<amount<<" from account : "<<accountnumber<<endl;
            }
            else
            {
                cout<<"insufficiant balance in the acccount :"<<accountnumber<<endl;
            }
        }

        virtual void displaybalance()const{
            cout << " Account :"<<accountnumber<<" Balance :"<<balance<<endl;
        }

        virtual ~account(){}

};
class savingsaccouunt : public account{
    protected:
    double intrestrate;

    public:
        savingsaccouunt(const string & accnumber,double initialbalance,double intrest):account(accnumber,initialbalance),intrestrate(intrest){}

        void addintrest(){
            balance += balance * (intrestrate/100);
            cout<<"intrest added to the accounnt "<<accountnumber<<endl;
        }

        void displaybalance() const override{
            cout<<" Savings account :"<<accountnumber<<" Balance :"<<balance<<endl;
        }
};

class checkingaccount : public account{
    public:
    checkingaccount(const string & accnumber,double initialbalance):account(accnumber,initialbalance){}

    void displaybalance()const override{
        cout<<" Checking Account :"<<accountnumber<<" Balance :"<<balance<<endl;
    }
};
int main(){
    savingsaccouunt savings("SA001",100.0,6.5);
    checkingaccount checking("CA001",200.0);

    savings.deposit(900);
    savings.displaybalance();
    savings.addintrest();
    savings.withdraw(500);
    savings.displaybalance();

    checking.deposit(800);
    checking.displaybalance();
    checking.withdraw(500);
    checking.displaybalance();

    return 0;
}