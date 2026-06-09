#include <iostream>
using namespace std;

class TicTacToe{
    public:
        char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
        char player1_sign;
        char player2_sign;
        int count;
        string n1, n2;

        TicTacToe()
        {
            system("clear");
            cout << "Enter name of player1: ";
            cin >> n1;
            cout << "Enter name of player2: ";
            cin >> n2;

            player1_sign = 'X';
            player2_sign = '0';
            count = 0;
        }

        void play()
        {
            while(true)
            {
                if(!(playMove(player1_sign, n1))) { return; }
                if(checkWin(player1_sign)) { displayBoard(); cout << n1 << " is the winner" << endl; return; }
                count++;
                if(count == 9){
                    displayBoard(); 
                    cout << "It's a tie" << endl; return; 
                }
                if(!(playMove(player2_sign, n2))) { return; }
                if(checkWin(player2_sign)) { displayBoard(); cout << n2 << " is the winner" << endl; return; }
                count++;
            }
        }

        void displayBoard()
        {
            system("clear");
            for(int i = 0; i < 3; i++)
            {
                for(int j = 0; j < 3; j++)
                {
                    cout << "| " << board[i][j] << " |";
                }
                cout << endl << "---------------" << endl;
            }
        }

        bool playMove(char sign, string name)
        {
            bool validMove = false;
            while(!validMove)
            {
                displayBoard();
                int move;
                cout << name << " please select a box: ";
                if(!(cin >> move))
                {
                    cout << endl << "Exiting...." << endl;
                    return false;
                }

                switch(move)
                {
                    case 1: if(board[0][0] == ' '){ board[0][0] = sign; validMove = true; } break; 
                    case 2: if(board[0][1] == ' '){ board[0][1] = sign; validMove = true; } break;
                    case 3: if(board[0][2] == ' '){ board[0][2] = sign; validMove = true; } break;
                    case 4: if(board[1][0] == ' '){ board[1][0] = sign; validMove = true; } break;
                    case 5: if(board[1][1] == ' '){ board[1][1] = sign; validMove = true; } break;
                    case 6: if(board[1][2] == ' '){ board[1][2] = sign; validMove = true; } break;
                    case 7: if(board[2][0] == ' '){ board[2][0] = sign; validMove = true; } break;
                    case 8: if(board[2][1] == ' '){ board[2][1] = sign; validMove = true; } break;
                    case 9: if(board[2][2] == ' '){ board[2][2] = sign; validMove = true; } break;
                };
            }
            return true;
        }

        bool checkWin(char sign)
        {
            // for rows
            for(int i = 0; i < 3; i++)
            {
                if(board[i][0] == sign && board[i][1] == sign && board[i][2] == sign)
                {
                    return true;
                }
            }

            // for cols
            for(int j = 0; j < 3; j++)
            
            {
                if(board[0][j] == sign && board[1][j] == sign && board[2][j] == sign)
                {
                    return true;
                }
            }

            // diagonals
            if((board[0][0] == sign && board[1][1] == sign && board[2][2] == sign) || (board[0][2] == sign && board[1][1] == sign && board[2][0] == sign))
            {
                    return true;
            }
            return false;
        }
};

int main()
{
    char again = 'y';
    while(again == 'y')
    {
        TicTacToe game;
        game.play();
        if(!cin){ break; }
        again = 'n';
        cout << "Play again? (y/n): ";
        cin >> again;
    }
    return 0;
}