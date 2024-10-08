#include<iostream>
#include<vector>
using namespace std;


int remDup(vector<int> &nums) {
    if (nums.empty())
            return 0;

        int j = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[j]) {
                j++;
                nums[j] = nums[i];
            }
        }

        return j + 1;
}


int main() {
    vector<int> arr = {0,0,1,1,1,2,2,3,3,4};

    int result = remDup(arr);
    cout << result << " ";
    cout << endl;

    return 0;
}