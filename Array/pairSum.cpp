#include<iostream>
#include<vector>
using namespace std;

//Brute Force for Pair Sum.

// vector<int> pairSum(vector<int> nums, int target) {
//     vector<int> ans;
//     int n = nums.size();
//     for(int i=0; i<n; i++) {
//         for(int j=i+1; j<n; j++) {
//             if(nums[i] + nums[j] == target)  {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }

//Lil Bit More Optimized Approach

vector<int> pairSum(vector<int> nums, int target) {
    int start = 0;
    int end = nums.size();
    vector <int> ans;
    while(start < end) {
        int summy = nums[start] + nums[end];
        if(summy > target) {    
            end--;
        } else if(summy < target) {
            start++;
        } else if(summy == target) {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int x = 17;
    vector <int> final = pairSum(arr, x);
    cout << final[0] << ", " << final[1] << endl;
    return 0;
}