#include<bits/stdc++.h>
using namespace std;

void isUnique(int arr[], int sz) {
    bool isUnique;

    for(int i = 0; i < sz; i++) {
        isUnique = true;

        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
    

        if(isUnique) {
            cout << arr[i] << " " << endl;;
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 22, 2, 22, 32, 1, 1, 32, 71};
    int sz = sizeof(arr)/sizeof(arr[0]);

    isUnique(arr, sz);
    return 0;
}