/*
There are n books, each ith book has arr[i] pages.
You need to allocate books to M number of students so that the maximum number of pages allocated to a student is minimum.

- each book should be allocated to a student.
- each student should have atleast one book.
- books should be allocated in a contiguous order.

calculate and return that minimum posiible number.
return -1 if that assignment is not possible
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    bool isValid(vector<int>& arr, int allowedPages, int totalBooks, int totalStu){         //O(n)
        int student = 1, currPages = 0;
        for(int i = 0; i < totalBooks; i++){
            if(currPages + arr[i] <= allowedPages){
                currPages += arr[i];
            }
            else{
                student++;
                currPages = arr[i];
            }
        }
        if(student > totalStu){
            return false;
        }
        return true;
    }

    int allocateMinMaxPages(vector<int>& arr, int n, int m){
        if(n < m){ return -1; }
        int sum = 0;
        int ans = -1;
        for(int i = 0; i < n; i++){               //O(n)
            sum += arr[i];
        }
        int st = 0;
        int end = sum;

        while(st <= end){                        //O(log(N) * n) , where N is a range
            int mid = st + (end-st)/2;
            if(isValid(arr, mid, n, m)){    //go left
                ans = mid;
                end = mid - 1; 
            }
            else{                           //go right
                st = mid + 1;
            }
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> arr = {2,1,3,4};
    int totalBooks = 4;
    int totalStu = 2;
    cout << s.allocateMinMaxPages(arr, totalBooks, totalStu) << endl;
    return 0;
}