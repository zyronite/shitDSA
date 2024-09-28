#include<bits/stdc++.h>
using namespace std;

int findElement(int arr[], int size, int find) {
    for(int i=0;i<size;i++) {
        if(arr[i] == find) {
            return i;
        }
    }
    return -1;
}


int main() {
    int nums[] = {1,23,4,5,64,34};
    int size = 6;
    int target = 23;
    cout << findElement(nums, size, target);

    return 0;
}