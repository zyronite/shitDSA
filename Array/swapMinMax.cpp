#include<bits/stdc++.h>
using namespace std;


void printArr(int arr[], int sz) {
    for(int i=0;i<sz;i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

int findMin(int arr[], int sz) {
    int smallestIndex = 0, i;
    for(i=0;i<sz;i++) {
        if(arr[i] < arr[smallestIndex]) {
            smallestIndex = i;
        }
    }
    return smallestIndex;
}

int findMax(int arr[], int sz) {
    int largestIndex = 0, i;
    for(i=0;i<sz;i++) {
        if(arr[i] > arr[largestIndex]) {
            largestIndex = i;
        }
    }
    return largestIndex;
}

void swapMinMax(int arr[], int sz) {
    int max = findMax(arr, sz);
    int min = findMin(arr, sz);

    swap(arr[max], arr[min]);
}

int main() {
    int nums[] = {1,23,4,5,64,34};
    int size = 6;
    int start = 0;
    int end = size - 1;

    swapMinMax(nums, size);
    printArr(nums, size);

}