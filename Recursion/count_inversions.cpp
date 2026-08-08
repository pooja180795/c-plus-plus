/*
find total inversion pair where i < j && arr[i] > arr[j]
tc = merge sort tc = O(nlogn)
sc = O(n), because temp array we used
*/

#include <iostream>
#include <vector>
using namespace std;

int mergeArr(vector<int>& arr, int st, int mid, int end){
    int i = st;
    int j = mid+1;
    int Inv = 0;
    
    vector<int> temp;

    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
            Inv += (mid - i + 1);
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
        arr[st+idx] = temp[idx];
    }
    return Inv;
}

int devideArr(vector<int>& arr, int st, int end){
    if(st < end){
        int mid = st + (end-st) / 2;
        int leftInvCount = devideArr(arr, st, mid);
        int rightInvCount = devideArr(arr, mid+1, end);
        int invCount = mergeArr(arr, st, mid, end);
        cout << leftInvCount <<" " << rightInvCount << " " << invCount << endl;
        return leftInvCount + rightInvCount +invCount;
    }
    return 0;
}

int main(){
    //vector<int> arr = {1,3,5,10, 2,6,8,9};
    //vector<int> arr = {6,3,5,2,7};
    vector<int> arr = {15,2,4,13,5,30};
    int st = 0;
    int end = arr.size() - 1;
    
    cout << devideArr(arr, st, end) << endl;
    
    return 0;
}