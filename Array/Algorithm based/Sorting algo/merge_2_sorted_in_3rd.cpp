#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
	void test(vector<int>& arr, vector<int>& arr2){
        int p1 = 0, p2 = 0;
        int n1 = arr.size();
        int n2 = arr2.size();
        vector<int> arr3(n1+n2);
        int n3 = n1+n2;
        for(int i = 0; i < n3; i++){
            if(arr[p1] <= arr2[p2] && p1 < n1){
                arr3[i] = arr[p1];
                p1++; 
            }
            else if(arr[p1] > arr2[p2] && p2 < n2){
                arr3[i] = arr2[p2];
                p2++;
            }
            else if(p1 >= n1 && p2 < n2){
                arr3[i] = arr2[p2];
                p2++;
            }
            else if(p2 >= n2 && p1 < n1){
                arr3[i] = arr[p1];
                p1++;
            }
        }
        cout<<"p1 = "<< p1 << endl;
        cout<<"p2 = "<< p2 << endl;
        printArr(arr3);
    }
    void printArr(vector<int>& arr3){
        for(int val: arr3){
            cout << val << " ";
        }
        cout << endl;
    }
};

int main(){
    Solution s;
    vector<int> arr = {1,2,3};
    vector<int> arr2 = {4,5,6};
    s.test(arr, arr2);
    return 0;
}