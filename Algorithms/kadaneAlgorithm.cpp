#include<iostream>
#include<climits>
#include<vector>
using namespace std;


int MaxSubArrEle(vector<int>&arr) {
    int currSum = 0, maxSum = INT_MIN;
    for(int val : arr) {
        currSum += val;
        maxSum = max(currSum, maxSum);
        if(currSum < 0) {
            currSum = 0;
        }
    }
    return maxSum;
}


int main() {
    vector<int>nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << MaxSubArrEle(nums);
    return 0;
}