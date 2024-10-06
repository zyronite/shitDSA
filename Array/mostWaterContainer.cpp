#include<iostream>
#include<vector>

using namespace std;

//Brute Force approach - O(n^2)

// int maxArea(vector<int>& height) {
//     int width = 0, area = 0, ans = 0, ht = 0;
//     for(int i = 0; i<height.size(); i++) {
//         for(int j = i+1; j<height.size(); j++) {
//             width = j - i;
//             ht = min(height[i], height[j]);
//             area = width * ht;
//             ans = max(area, ans);
//         }
//     }

//     return ans;        
// }


// Optimal solution approach - O(n)
int maxArea(vector<int>& height) {
    int start = 0;
    int end = height.size() - 1;
    int maxWater = 0;
    while (start < end) {
        int wd = end - start;
        int ht = min(height[start], height[end]);
        int currWater = wd * ht;
        maxWater = max(maxWater, currWater);
        height[start] < height[end] ? start++ : end--;
    }
    
    return maxWater;
}

int main() {
    vector<int> nums = {1,8,6,2,5,4,8,3,7};
    int maxWater = maxArea(nums);
    cout << maxWater << endl;
    return 0;
}