/* Encapsualation:
It's a practice of bundling variables and methods in a single unit(called class),
while restricting direct access to the internal state from outside. */

#include <iostream>
using namespace std;

class Account{
private:
    int account_no;
    string name;
    float balance;
public:

    Account(int a, string n, float b){
        account_no = a;
        name = n;
        if(b < 0){
            cout << "invalid balance" << endl;
            balance = 0;
        }
        else{
            balance = b;
            cout << "account created..." << endl;
        }
        
    }

    void deposit(int amt){
        try{
            checkAmt(amt);
            balance += amt;
            cout << "Deposited " << amt <<" successfully" << endl;
        }
        catch(const char* error){
            cout << "Error: " << error << endl;
        }

    }

    void checkAmt(int amt){
            if(amt < 0){
                throw("Withdrawal/Diposit Amount can not be negative!");
            }
            if(balance < amt){
                throw("withdrawal amount exceeds balance!");
            }
            
        }

    void withdraw(int amt){
        try{
            checkAmt(amt);
            balance -= amt;
            cout << "withdrawn "<< amt <<" sucessfully" << endl;
        }

        catch(const char* error){
            cout << "Error: " << error << endl; 
        }
    }

    void displayBalance(){
        cout << "your balance = " << balance << endl;
    }

    ~Account(){
        cout << "account destroyed..." << endl;
    }

};

int main(){
    Account c1(234, "abhi", 1000);
    
    c1.displayBalance();
    c1.deposit(500);
    c1.displayBalance();
    c1.withdraw(200);
    c1.displayBalance();
    c1.withdraw(300);
    c1.displayBalance();
    
    return 0;
}

