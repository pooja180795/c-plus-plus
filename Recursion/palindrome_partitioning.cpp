/*
Given a string s, partition s such that every substring of the partition is a palindrome. Return all possible palindrome partitioning of s.
*/

#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(string s){                // O(n)
    int st = 0;
    int end = s.length()-1;
    while(st < end){
        if(s[st] != s[end]){
            return false;
        }
        st++;
        end--;
    }
    return true;
}

    void getAllPartitions(string s, vector<string>& partition, vector<vector<string>>& ans){    // O(n*2^n)
    if(s.length() == 0){
        ans.push_back(partition);
        return;
    }

    for(int i = 0; i < s.length(); i++){              
        string part = s.substr(0, i+1);
        if(isPalindrome(part)){
            partition.push_back(part);
            getAllPartitions(s.substr(i+1, s.length()), partition, ans);
            //backtracking
            partition.pop_back();
        }
    }
}

int main(){
    string s = "aab";
    vector<string> partition;
    vector<vector<string>> ans;
    getAllPartitions(s, partition, ans);
    for(vector<string> vec : ans){
        for(string str : vec){
            cout << str << " ";
        }
        cout << endl;
    }
    return 0;
}