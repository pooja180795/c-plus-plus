#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int secret_no = rand() % 100 + 1;
    int guess;
    int tries = 0;

    while(tries < 7){
        cout << "Enter your guess: ";
        if(!(cin >> guess)){
            cout << "Invalid input....Exiting..." << endl;
            break;
        }
        tries++;

        if(guess < secret_no){
            cout << "guess is low" << endl;
            cout << 7 - tries << " tries left. use wisely!" << endl;
        }
        else if(guess > secret_no){
            cout << "guess is high" << endl;
            cout << 7 - tries << " tries left. use wisely!" << endl;
        }
        else{
            cout << "guess is correct in " << tries << " tries..." << endl;
            break;
        }
    }

    if(tries == 7 && guess != secret_no){
        cout << "Game over...." << endl;
        cout << "Right number is: " << secret_no << endl;
    }

    return 0;
}

