#include<bits/stdc++.h>
#include<climits>

using namespace std;

int smallest(int arr[], int size) {
    int smallest = INT_MAX;
    for(int i=0;i<size;i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}


int largest(int arr[], int size) {
    int largest = INT_MIN;
    for(int i=0;i<size;i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int arr[] = {1,2,34,534,21,4,12,121};
    int size = 8;

    int chota = smallest(arr, size);
    int bada = largest(arr, size);

    cout << chota << endl;
    cout << bada << endl;

}