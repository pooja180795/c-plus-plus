#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    string s = "ecevvhvhg";
    int k = 2;
    int left = 0;
    int maxLen = 0;
    
    unordered_map<char, int> m;

    for(int right = 0; right < s.length(); right++){        //  O(n)
        m[s[right]]++;

        while(m.size() > k){                                //  O(1) 
            m[s[left]]--;
            if(m[s[left]] == 0) m.erase(s[left]);
            left++;
            
        }
        maxLen = max(maxLen, right-left+1);
    }
    cout << maxLen << endl;
}