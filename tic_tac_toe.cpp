#include <iostream>
using namespace std;

char checkWin(char board[3][3], char player1, char player2);
void printBoard(char board[3][3]);
bool checkDraw(char board[3][3]);

int main()
{
    char board[3][3] = {    {' ', ' ', ' '}, 
                            {' ', ' ', ' '}, 
                            {' ', ' ', ' '}};

    char player1 = 'X', player2 = '0';

    system("clear");
    printBoard(board);

    while(true)
    {
        int n1;
        cout << "p1 please press remainings of 1-9 to fill that box: ";
        cin >> n1;

        switch(n1)
        {
            case 1: if(board[0][0] == ' ') { board[0][0] = 'X'; } break;
            case 2: if(board[0][1] == ' ') { board[0][1] = 'X'; } break;
            case 3: if(board[0][2] == ' ') { board[0][2] = 'X'; } break;
            case 4: if(board[1][0] == ' ') { board[1][0] = 'X'; } break;
            case 5: if(board[1][1] == ' ') { board[1][1] = 'X'; } break;
            case 6: if(board[1][2] == ' ') { board[1][2] = 'X'; } break;
            case 7: if(board[2][0] == ' ') { board[2][0] = 'X'; } break;
            case 8: if(board[2][1] == ' ') { board[2][1] = 'X'; } break;
            case 9: if(board[2][2] == ' ') { board[2][2] = 'X'; } break;
        }

        system("clear");
        printBoard(board);

        char winner = checkWin(board, player1, player2);
        if(winner != 'n')
        {
            cout << "winner is " << winner << endl;
            return 0;
        }

        bool draw = checkDraw(board);
        if(draw)
        {
            cout << "It's a draw....:)" << endl;
            return 0;
        }

        int n2;
        cout << "p2 please press remainings of 1-9 to fill that box: ";
        cin >> n2;
        switch(n2)
        {
            case 1: if(board[0][0] == ' ') { board[0][0] = '0'; } break;
            case 2: if(board[0][1] == ' ') { board[0][1] = '0'; } break;
            case 3: if(board[0][2] == ' ') { board[0][2] = '0'; } break;
            case 4: if(board[1][0] == ' ') { board[1][0] = '0'; } break;
            case 5: if(board[1][1] == ' ') { board[1][1] = '0'; } break;
            case 6: if(board[1][2] == ' ') { board[1][2] = '0'; } break;
            case 7: if(board[2][0] == ' ') { board[2][0] = '0'; } break;
            case 8: if(board[2][1] == ' ') { board[2][1] = '0'; } break;
            case 9: if(board[2][2] == ' ') { board[2][2] = '0'; } break;
        }

        system("clear");
        printBoard(board);

        winner = checkWin(board, player1, player2);
        if(winner != 'n'){
            cout << "winner is " << winner << endl;
            return 0;
        }
        draw = checkDraw(board);
        if(draw)
        {
            cout << "It's a draw....:)" << endl;
            return 0;
        }

        
    }
}

char checkWin(char board[3][3], char player1, char player2)
{
    for(int i = 0; i < 3; i++)
    {
        if(board[i][0] == player1 && board[i][1] == player1 && board[i][2] == player1)
        {
            return player1;
        }
        if(board[i][0] == player2 && board[i][1] == player2 && board[i][2] == player2)
        { 
            return player2;
        }
    }
      
    for(int j = 0; j < 3; j++)
    {
        if(board[0][j] == player1 && board[1][j] == player1 && board[2][j] == player1)
        {
            return player1;
        }
        if(board[0][j] == player2 && board[1][j] == player2 && board[2][j] == player2)
        {
            return player2;
        }
    }

    if(board[0][0] == player1 && board[1][1] == player1 && board[2][2] == player1)
    {
        return player1;
    }

    if(board[0][2] == player1 && board[1][1] == player1 && board[2][0] == player1)
    {
        return player1;
    }

    if(board[0][0] == player2 && board[1][1] == player2 && board[2][2] == player2)
    {
        return player2;
    }

    if(board[0][2] == player2 && board[1][1] == player2 && board[2][0] == player2)
    {
        return player2;
    }
    return 'n';
}

void printBoard(char board[3][3]){
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(board[i][j] == ' ')
            {
                cout << "| |  ";
            }
            else if(board[i][j] == 'X') { cout << "|X|  ";  }
            else if(board[i][j] == '0') { cout << "|0|  ";  }
        }
        cout << endl << "-------------" << endl;
    }
}

bool checkDraw(char board[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(board[i][j] == ' ')
            {
                return false;
            }
        }
    } 
    return true;
}