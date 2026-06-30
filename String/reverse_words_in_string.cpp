/*
reverse words in string and also remove all extra spaces
Ex: str = " the   pen  " then
    ans = "pen the"
*/
#include <iostream>
#include <algorithm>
using namespace std;

string reverseWords(string str){                    //O(n)
    string ans;
    int st = 0;
    int end = str.length() - 1;
    cout << str << endl;
    
    reverse(str.begin(), str.end());
    cout << str << endl;

    for(int i = 0; i <  str.length(); i++){         // O(n)
        string word = "";
        while(str[i] != ' ' && i < str.length()){
            word  += str[i++];
        }
        reverse(word.begin(), word.end());
        if(word.length() > 0){
            ans += " " + word;
        }
    }
    return ans.substr(1);
}

int main(){
    string str = " the    pen ";
    cout << reverseWords(str) << endl;
    return 0;
}