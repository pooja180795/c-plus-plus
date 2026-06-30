#include <iostream>
//#include <cstring>
#include <unordered_map>
using namespace std;

int main(){
    string str1 = "ab";
    string str2 = "nvdnnbajfj";
    int arr[26] = {0};
    int arr2[26] = {0};
    
    for(int i = 0; i < str1.length(); i++){
        arr[str1[i] - 'a']++;
    }

    for(int i = 0; i < str2.length(); i++){
        int winIndex = 0;
        int idx = i;
        int winFreq[26] = {0};

        while(winIndex <= str1.length() && )
    }

    cout << "no" << endl;
    
    cout << endl;
    
    return 0;
}