/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Constraints:

    1 <= prices.length <= 10^5
    0 <= prices[i] <= 10^4

*/

#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int maxProfit(vector<int>& prices){
        int maxProfit = 0;
        int bestBuy = prices[0];

        for(int i = 1; i < prices.size(); i++){
            if(prices[i] > bestBuy){
                maxProfit = max(maxProfit, prices[i] - bestBuy);
            }
            bestBuy = min(bestBuy, prices[i]);
        }
        return maxProfit;
    }
};

int main(){
    vector<int> prices = {7,1,25,3,66,4};
    Solution s;
    cout << s.maxProfit(prices) << endl;
    return 0;
}