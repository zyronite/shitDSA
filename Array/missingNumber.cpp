#include<iostream>
#include<vector>
using namespace std;

int missingNum(vector<int> &nums) {
    int n = nums.size(), actualSum = 0, missingVal = 0;
    for(int val : nums) {
        actualSum += val;
    }
    int expectedSum = n * (n + 1) / 2;
    missingVal = expectedSum - actualSum;
    return missingVal;
}

int main() {
    vector<int> arr = {9,6,4,2,3,5,7,0,1};
    int final = missingNum(arr);
    cout << final << endl;
    return 0;
}