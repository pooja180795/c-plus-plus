/*
Problem: A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

    For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].

The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

    For example, the next permutation of arr = [1,2,3] is [1,3,2].
    Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
    While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.

Given an array of integers nums, find the next permutation of nums.

The replacement must be in place and use only constant extra memory.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
	void findNextPermutation(vector<int>& arr){      // time-complexity = O(1) ,space-complexity = O(1)
        //find pivote
        int n = arr.size();
        if(n == 1) { return; }
        int piv = -1;
        for(int i = n-2; i >=0; i--){
            if(arr[i] < arr[i+1]){
                piv = i;
                break;
            }
        }
        if(piv == -1){
            reverse(arr.begin(), arr.end());
            return;
        }

        // find next best of pivot and swap it with pivot
        for(int i = n-1; i > piv; i--){
            if(arr[i] > arr[piv]){
                swap(arr[i], arr[piv]);
                break;
            }
        }

        //reverse (pivot+1 to n-1)
        //reverse(arr.begin() + piv+1, arr.end());
        int st = piv+1;
        int end = n-1;
        while(st <= end){
            swap(arr[st], arr[end]);
            st++;
            end--;
        }
    }

    void printArr(vector<int>& arr){
        for(int val : arr){
            cout << val << " ";
        }
    }
};

int main(){
    Solution s;
    vector<int> arr = {5,4,7,6,5,4,3,2,1};
    s.findNextPermutation(arr);
    s.printArr(arr);
    return 0;
}