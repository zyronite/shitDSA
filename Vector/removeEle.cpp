#include<iostream>
#include<vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
        int index = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
}

int main() {
    vector<int> nums = {3, 2, 2, 3, 4, 2, 5};  // Sample input array
    int val = 2;  // Value to remove from the array

    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    int newSize = removeElement(nums, val);  // Call the function

    cout << "Array after removing " << val << ": ";
    for (int i = 0; i < newSize; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "New size of the array: " << newSize << endl;

    return 0;
}