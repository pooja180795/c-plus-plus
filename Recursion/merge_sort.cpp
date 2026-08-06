#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int st, int mid, int end){             // O(n)
    int i = st;
    int j = mid+1;
    vector<int> temp; 
    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i <= mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= end){
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx = 0; idx < temp.size(); idx++){
        arr[idx+st] = temp[idx];
    }
    
}

void divideArr(vector<int>& arr, int st, int end){          // O(log n)
    
    if(st < end){
        int mid = st + (end-st)/2;
        divideArr(arr, st, mid);        // left half
        divideArr(arr, mid+1, end);     // right half
        merge(arr, st, mid, end);
    }
   
}

int main(){                                                 // tc = O(n * log(n)), sc = O(n) (sc for temp vector we created)
    vector<int> arr = {133,6,44,12,99,2};
    
    int st = 0;
    int end = arr.size()-1;
    divideArr(arr, st, end);
    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}