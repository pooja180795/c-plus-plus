/*
You are given a string s. You can convert s to a palindrome by adding characters in front of it.

Return the shortest palindrome you can find by performing this transformation.
*/
  
#include <iostream>
#include <algorithm>
using namespace std;

bool isPalin(const string &s, int st, int end){
    while(st < end){
        if(s[st] != s[end]){
            return false;
        }
        st++;
        end--;
    }
    return true;
}

int main(){                             // for worst case : O(n^2) and for best case: O(n)
    string s = "aacecaa";
    int n = s.length() - 1;
    int longest;
    for(int i = n; i >= 0; i--){
        
        
        if(isPalin(s, 0, i)){
            longest = i+1;
            break;
        }
    }
    string rem = s.substr(longest);
    reverse(rem.begin(), rem.end());

    
    cout << rem + s << endl;
    return 0;
}