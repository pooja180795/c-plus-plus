#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

typedef struct point{
    int x;
    int y;
}p;

int main(){
    int t = time(0);
    srand(t);
    int head_x = 1 + rand() % 7;
    int head_y = 1 + rand() % 15;
    int body_x = head_x;
    int body_y = head_y + 1;
    int tail_x = head_x;
    int tail_y = head_y + 2;

    char grid[10][20];

    for(int i = 0; i < 10; i++){
        for(int j= 0; j < 20; j++){
            if(i == 0 || i == 9 || j == 0 || j == 19){
            grid[i][j] = '#';
            }
            else if(i == head_x && j == head_y){
                grid[i][j] = '*';
            }
            else if((i == body_x && j == body_y) || (i == tail_x && j == tail_y)){
                grid[i][j] = '-';   
            }
            else{
                grid[i][j] = ' ';
            }
        }
    }

    for(int i = 0; i < 10; i++){
        for(int j= 0; j < 20; j++){
            cout << grid[i][j];
        }
        cout << endl;
    }

    // vector<p> body = { {0,0}, {1,0}, {2,0} };

    // for(int i = 0; i < 3; i++){
    //     for(int j= 0; j < 1; j++){
    //         cout << "*";
    //     }
    // }

    return 0;
}