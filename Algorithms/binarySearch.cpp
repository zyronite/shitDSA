#include<iostream>
#include<vector>
using namespace std;

int searchBin(vector<int>&arr, int target) {
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start)/2;

    while(start <= end) {
        if(arr[mid] > target) {
            end = mid - 1;
        } else if(arr[mid] < target) {
            start = mid + 1;
        } else {
            return mid;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}


int main() {
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12};
    int aim = 12;

    cout << searchBin(arr1, aim);

    cout << endl;
    return 0;
}