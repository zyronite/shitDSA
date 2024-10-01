#include<iostream>
#include<vector>

using namespace std;

int isUnique(vector <int> &arr) {
    int ans = 0;
    for(int value : arr) {
        ans ^= value;
    } return ans;
}

int main() {
    vector <int> num = {2, 2, 1};
    cout << isUnique(num);
    return 0;
}