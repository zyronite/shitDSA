#include<bits/stdc++.h>
#include<climits>
using namespace std;

void printArr(int arr[], int sz) {
    for(int i=0;i<sz;i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

int findMin(int arr[], int sz) {
    int smallest = INT_MAX, i;
    for(i=0;i<sz;i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
            return i;
        }
    }
    return -1;
}

int findMax(int arr[], int sz) {
    int largest = INT_MIN, i;
    for(i=0;i<sz;i++) {
        if(arr[i] > largest) {
            largest = arr[i];
            return i;
        }
    }
    return -1;
}

int main() {
    int nums[] = {1,23,4,5,64,34};
    int size = 6;
    int i = 0;
    int start = 0;
    int end = size - 1;
    int max = findMax(nums, size);
    int min = findMin(nums, size);

    cout << max;
    cout << min;
    // while(start < end) {
    //     swap(max == nums[i], min == nums[i]);
    // }

    // printArr(nums, size);

}