#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        map<char, int> freq;
        int n = chars.size();

        for(int i = 0; i < n; i++){
            freq[chars[i]]++;
        }    

        int count = 0;
        for(auto pair : freq){
            vector<int> vec;
            if(pair.second == 1){
                chars[count++] = pair.first;
            }
            else if( pair.second > 1 && pair.second < 10){
                chars[count++] = pair.first;
                chars[count++] = 'pair.second';
            }
            else{
                while(pair.second > 0){
                    vec.push_back(pair.second % 2); 
                    pair.second %= 2;
                }
                reverse(vec.begin(), vec.end());
                for(int val : vec){
                    chars[count++] = val;
                }
            }
        }
        //count--;
        return count;
        
    }
};


int main(){
    Solution s;
    vector<char> chars = {'a','a','b','b','c','c','c','e','d','d'};
    cout << s.compress(chars) << endl;
    
    for(char val : chars){

    }

    

    return 0;
}