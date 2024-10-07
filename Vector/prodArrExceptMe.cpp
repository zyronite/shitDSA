#include<iostream>
#include<vector>
using namespace std;

//Brute Force approach

// vector<int> productExceptSelf(vector<int>& nums) {
//     int n = nums.size();
//     vector<int> ans(n, 1);
//     for(int i = 0; i<n; i++) {
//             int prod = 1;
//         for(int j = 0; j<n; j++) {
//             if( i != j) {
//                 prod *= nums[j];
//             }
//         }
//         ans[i] = prod;
//     }

//     return ans;
// }

vector<int> productExceptSelf(vector<int> &nums) {
    int n = nums.size();
    vector<int> ans(n, 1);

    // calculating prefix
    
    for(int i = 1; i<n; i++) {
        ans[i] = ans[i-1] * nums[i-1];
    }

    // calculating suffix
    int suffix = 1;
    for(int i = n-2; i>= 0; i--) {
        suffix *= nums[i+1];
        ans[i] *= suffix;
    }

    return ans;
}


int main() {
    vector<int> nums = {1, 2, 3, 4};
    
    // Call the productExceptSelf function
    vector<int> result = productExceptSelf(nums);
    
    // Print the result
    cout << "Product of array except self: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
    
}