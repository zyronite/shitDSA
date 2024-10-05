#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int maxProfit = 0;
    int bestBuy = prices[0];
    
    
    cout << "mxprofit = " << maxProfit << ", " << "bestBy = " << bestBuy << endl;

    for(int i = 1; i<prices.size(); i++) {
        if(prices[i] > bestBuy) {
            cout << "bestBy = " << bestBuy << ", prices = " << prices[i] << endl;

            maxProfit = max(maxProfit, prices[i] - bestBuy);

            cout << "mxpṣrofit = " << maxProfit << endl;
    
        }

        bestBuy = min(bestBuy, prices[i]);
        
        cout << "bestBy = " << bestBuy << ", prices = " << prices[i] << endl;
    }
    cout << endl;
    cout << "The Max Profit = " << maxProfit;
}

int main() {
    vector <int> nums = {7, 1, 5, 3, 6, 4};
    maxProfit(nums);
    return 0; 
}