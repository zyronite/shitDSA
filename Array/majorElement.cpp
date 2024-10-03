#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Brute Force Method Algo Beginning

int majorEle(vector<int> arr) {
    int freq;
    int n = arr.size();
    for(int value : arr) {
        freq = 0;
        for(int ele : arr) {
            if(ele == value) {
                freq++;
            }
        }
        if(freq > n/2) {
            return value;
        }
        
    }
}


//More Optimized Approach

// int majorEle(vector<int> &nums)
// {
//     int n = nums.size();
//     sort(nums.begin(), nums.end());
//     int freq = 1, ans = nums[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (nums[i] == nums[i - 1])
//         {
//             freq++;
//         }
//         else
//         {
//             freq = 1;
//             ans = nums[i];
//         }
//     }
//     if (freq > n / 2)
//     {
//         return ans;
//     }
// }

//Moore's alogrithm 

// int majorEle(vector<int> &nums) {
//     int n = nums.size();
//     int freq = 0, ans = 0;
//     for(int i = 0; i<n; i++) {
//         if(freq == 0) {
//             ans = nums[i];
//         } else if(ans == nums[i]) {
//             freq++;
//         } else {
//             freq--;
//         }
//     }

//     if(freq > n/2) {
//         return ans;
//     }
//     return ans;
// }


int main()
{
    vector<int> arr = {3, 2, 3};
    int result = majorEle(arr);
    if (result != -1)
        cout << "The majority element is: " << result << endl;
    else
        cout << "No majority element found." << endl;

    return 0;
}