#include<iostream>
#include<climits>
using namespace std;


int subArrMaximumSum(int arr[], int size) {
    int maxSum = INT_MIN;
    for(int start=0; start < size; start++) {
        int currSum=0;
        for(int end=start; end < size; end++) {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
            if(currSum < 0) {
                currSum = 0;
            }
        }
    } 
    return maxSum;
}

void subArrTraverse(int arr[], int size) {
    for(int start=0; start < size; start++) {
        for(int end=start; end < size; end++) {
            for(int i = start; i <= end; i++) {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int nums[] = {3, -4, 5, 4, -1, 7, -8};
    int sz = 6;
    subArrTraverse(nums, sz);
    cout << endl;
    cout << endl;

    cout << subArrMaximumSum(nums, sz);

    return 0;
}