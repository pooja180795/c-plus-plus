#include <iostream>
using namespace std;

class TicTacToe{
    public:
        char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
        char player1 = 'X';
        char player2 = '0';
        int count = 0;

        void play()
        {
            while(true)
            {
                if(!(playMove(player1))) { return; };
                if(checkWin(player1)) { displayBoard(); cout << player1 << " is the winner" << endl; break; }
                count++;
                if(count == 9){
                    displayBoard(); 
                    cout << "It's a tie" << endl; break; 
                }
                if(!(playMove(player2))) { return; }
                if(checkWin(player2)) { displayBoard(); cout << player2 << " is the winner" << endl; break; }
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

        bool playMove(char p)
        {
            bool validMove = false;
            while(!validMove)
            {
                displayBoard();
                int move;
                cout << "player- " << p << " please select a box: ";
                if(!(cin >> move))
                {
                    cout << endl << "Exiting...." << endl;
                    return false;
                }

                switch(move)
                {
                    case 1: if(board[0][0] == ' '){ board[0][0] = p; validMove = true; } break; 
                    case 2: if(board[0][1] == ' '){ board[0][1] = p; validMove = true; } break;
                    case 3: if(board[0][2] == ' '){ board[0][2] = p; validMove = true; } break;
                    case 4: if(board[1][0] == ' '){ board[1][0] = p; validMove = true; } break;
                    case 5: if(board[1][1] == ' '){ board[1][1] = p; validMove = true; } break;
                    case 6: if(board[1][2] == ' '){ board[1][2] = p; validMove = true; } break;
                    case 7: if(board[2][0] == ' '){ board[2][0] = p; validMove = true; } break;
                    case 8: if(board[2][1] == ' '){ board[2][1] = p; validMove = true; } break;
                    case 9: if(board[2][2] == ' '){ board[2][2] = p; validMove = true; } break;
                };
            }
            return true;
        }

        bool checkWin(char p)
        {
            // for rows
            for(int i = 0; i < 3; i++)
            {
                if(board[i][0] == p && board[i][1] == p && board[i][2] == p)
                {
                    return true;
                }
            }

            // for cols
            for(int j = 0; j < 3; j++)
            {
                if(board[0][j] == p && board[1][j] == p && board[2][j] == p)
                {
                    return true;
                }
            }

            // diagonals
            if((board[0][0] == p && board[1][1] == p && board[2][2] == p) || (board[0][2] == p && board[1][1] == p && board[2][0] == p))
            {
                    return true;
            }
            return false;
        }
};

int main()
{
    TicTacToe game;
    game.play();
    return 0;
}