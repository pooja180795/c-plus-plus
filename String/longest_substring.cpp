#include <iostream>
#include <climits>
#include <unordered_map>
using namespace std;

int findMaxLen(string s){
    int maxLen = INT_MIN;
    int n = s.length();
    unordered_map<char, int> m;
    int left = 0;
    
    for(int right = 0; right < n; right++){
        if((m.find(s[right]) != m.end()) && m[s[right]] >= left){
            left = m[s[right]] + 1;
        }
        m[s[right]] = right;
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}

int main() {
    string s = "abcdeajklp";
    cout << findMaxLen(s) << endl;
    return 0;
}