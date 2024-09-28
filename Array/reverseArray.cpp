#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[], int sz) {
    for(int i=0;i<sz;i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

void reverseArr(int arr[], int sz) {
    int st = 0;
    int e = sz-1;
    int mid = e - (st + e/2);
    while(st <= e) {
        swap(arr[st], arr[e]);
        st++;
        e--;
    }
    printArr(arr, sz);
}

int main() {
    int nums[] = {1,23,4,5,64,34};
    int size = 6;
    reverseArr(nums, size);
    return 0;
}