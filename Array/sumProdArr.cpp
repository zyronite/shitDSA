#include<bits/stdc++.h>
using namespace std;


void sum(int arr[], int sz) {
    int sum, i;
    for(int i=0;i<sz-1;i++) {
        sum = sum + arr[i];
    }
    cout << "Sum : " << sum << endl;
}

void prod(int arr[], int sz) {
    int prod = 1, i;
    for(int i=0;i<sz-1;i++) {
        prod = prod * arr[i];
    }
    cout << "Prod : " << prod << endl;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int sz = 6;

    sum(nums, sz);
    prod(nums, sz);
    return 0;
}