#include<iostream>
using namespace std;

void compArr(int num1[], int num2[], int size1, int size2) {
    bool isCommon;

    for(int i = 0; i<size1; i++) {
        isCommon = false;

        for(int j = 0; j<size2; j++) {
            
            if(num1[i] == num2[j]) {
                isCommon = true;
                break;
            }
        }
        

        if(isCommon) {
            cout << num1[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,4,8,7,5};
    int size1 = sizeof(arr1)/sizeof(arr2[0]);
    int size2 = sizeof(arr1)/sizeof(arr2[0]);

    compArr(arr1, arr2, size1, size2);
    return 0;
}