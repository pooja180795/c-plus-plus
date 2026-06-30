/*
Given two strings s1 and s2, return true if s2 contains a of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.
*/

#include <iostream>
using namespace std;

bool isSameFreq(int freq[], int windFreq[], int partSize){
    for(int i = 0; i < partSize; i++){      //  O(1) = 26
        if(freq[i] != windFreq[i]){
            return false;
        }
    }
    return true;
}

bool checkPermutation(string s1, string s2){    //O(n^2)
    int n1 = s1.length();
    int freq[26] = {0};
    int n2 = s2.length();
    int partSize = size(freq);
    for(int i = 0; i < n1; i++){     //O(n1)
        freq[s1[i] - 'a']++;
    }

    for(int i = 0; i < n2; i++){    //O(n2)
        int idx = i;
        int windFreq[26] = {0};
        int windSize = 0;

        while(windSize < n1 && idx < n2){   //O(n2)
            windFreq[s2[idx] - 'a']++;
            idx++;
            windSize++;
        }
        
        if(isSameFreq(freq, windFreq, partSize)){
            return true;
        }
    }
    return false;
}

int main(){
    string s1 = "kb";
    string s2 = "eidbaoaoo";
    
    cout << checkPermutation(s1, s2) << endl; 

    return 0;
}



