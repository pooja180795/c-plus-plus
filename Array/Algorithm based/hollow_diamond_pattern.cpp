#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
	void test(int n){
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n - i - 1; j++){
                cout << " ";
            }
            cout << "*";
            if(i != 0){
            for(int j = 0; j < 2*i -1; j++){
                cout << " "; 
            }
            cout << "*";
            }
            cout << endl;
        }
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j > 0; j--){
                cout << " ";
            }
            cout << "*";
            if(i != n-2){
            for(int j = 0; j< 2*(n-2-i)-1; j++){
                cout << " ";
            }
            cout << "*";
        }
            cout << endl;
        }
    }
};

int main(){
    Solution s;
    int n = 4;
    s.test(n);
    return 0;
}