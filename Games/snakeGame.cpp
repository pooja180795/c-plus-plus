#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <termios.h>
using namespace std;

typedef struct point{
    int x;
    int y;
}p;

void  makeGrid(char grid[][20], vector<pair<int,int>> body, vector<pair<int,int>> food){
    
    for(int i = 0; i < 10; i++){
        for(int j= 0; j < 20; j++){
            if(i == 0 || i == 9 || j == 0 || j == 19){
            grid[i][j] = '#';
            }
            else if(i == body[0].first && j == body[0].second){
                grid[i][j] = '*';
            }
            else if((i == body[1].first && j == body[1].second) || (i == body[2].first && j == body[2].second)){
                grid[i][j] = '-';   
            }
            else if(i == food[0].first && j == food[0].second){
                grid[i][j] = 'f';
            }
            else{
                grid[i][j] = ' ';
            }
        }
    }
    
}

void showGrid(char grid[][20]){
    for(int i = 0; i < 10; i++){
        for(int j= 0; j < 20; j++){
            cout << grid[i][j];
        }
        cout << endl;
    }
}

void moveSnake(char grid[][20], vector<pair<int,int>> body){
    
}

int main(){

    int t = time(0);
    srand(t);
    int head_x = 1 + rand() % 8;
    int head_y = 1 + rand() % 16;
    int body_x = head_x;
    int body_y = head_y + 1;
    int tail_x = head_x;
    int tail_y = head_y + 2;

    int food_x = 1 + rand() % 8;
    int food_y = 1 + rand() % 18;

    char grid[10][20];

    vector<pair<int, int>> body = {{head_x, head_y}, {body_x, body_y}, {tail_x, tail_y}};
    vector<pair<int, int>> food = {{food_x, food_y}};
    makeGrid(grid, body, food);
    showGrid(grid);
    moveSnake(grid, body);

   

    return 0;
}