/* Encapsualation:
It's a practice of bundling variables and methods in a single unit(called class),
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
            cout << "invalis balance" << endl;
            balance = 0;
        }
        else{
            balance = b;
            cout << "account created..." << endl;
        }
        
    }

    void deposit(int amt){
        balance += amt;
        cout << "Deposited " << amt <<" successfully" << endl;
    }

    void withdraw(int amt){
        if(balance >= amt){
            balance -= amt;
            cout << "withdrawn "<< amt <<" sucessfully" << endl; 
        }
        else{
            cout << "withdrawal is bigger than balance" << endl;
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
    Account c1(234, "abhi", -1000);
    
    c1.displayBalance();
    c1.deposit(500);
    c1.displayBalance();
    c1.withdraw(200);
    c1.displayBalance();
    
    return 0;
}

