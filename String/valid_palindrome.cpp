/* if string is a valid palindrome return 1 otherwise return 0 */

#include <iostream>
using namespace std;

bool isAlphaNumeric(char ch){
    if((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
        return true;
    }    
    return false;
}

bool isPalindrome(string str){
    int st = 0;
    int end  = str.length() - 1;
    
    while(st < end){                                    //O(n)
        if(!isAlphaNumeric(str[st])){
            st++; continue;
        }
        if(!isAlphaNumeric(str[end])){
            end--; continue;
        }
        // if(!isalnum(str[st])) { st++; continue; }
        // if(!isalnum(str[end])) { end--; continue; }
        if(tolower(str[st]) != tolower(str[end])){
            return false;
        } else{
            
            st++;
            end--;
        }
    }
    return true;   
}

int main(){
    string str = "A man, a plan, a canal: Panama";
    cout << isPalindrome(str) << endl;
    return 0;
}