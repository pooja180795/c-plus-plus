#include <iostream>
#include <vector>
using namespace std;

void getAns(vector<vector<int>>& maze, int r, int c, vector<string>& ans, string path, int n){
    if(r < 0 || c < 0 || r >= n || c >= n || maze[r][c] == 0 || maze[r][c] == -1){
        return;
    }
    if(r == n-1 && c == n-1){
        ans.push_back(path);
        return;
    }
    maze[r][c] = -1;                           // visit
    getAns(maze, r, c+1, ans, path + 'R', n);  // right
    getAns(maze, r+1, c, ans, path + 'D', n);  // down
    getAns(maze, r, c-1, ans, path + 'L', n);  // left
    getAns(maze, r-1, c, ans, path + 'U', n);  // up
    maze[r][c] = 1;                            // unvisit
}

int main(){             // tc = O(4^(n^2))    sc = (decreased by n^2 as we haven't use seperate visited matrix)
    vector<vector<int>> maze = {{1,0,0,0}, {1,1,0,1}, {1,1,0,0}, {0,1,1,1}};
    int n = maze.size();
    
    vector<string> ans;
    string path;

    getAns(maze, 0, 0, ans, path, n);

    for(string s : ans){
        cout << s << endl;
    }
    return 0;
}