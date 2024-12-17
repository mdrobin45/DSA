#include <bits/stdc++.h>
using namespace std;
/*
 * @lc app=leetcode id=209 lang=cpp
 *
 * [209] Minimum Size Subarray Sum
 */

// @lc code=start
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int n = nums.size();
        
        // Create the prefix sum array
        vector<int> prefix(n);
        prefix[0] = nums[0];
        for (int i = 1; i < n; i++) { // Start from i = 1 to avoid out-of-bounds
            prefix[i] = nums[i] + prefix[i - 1];
        }

        int minLength = INT_MAX;

        // Iterate through the prefix array to find subarrays
        for (int i = 0; i < n; i++) {
            if (prefix[i] >= target) {
                // Perform binary search to find the leftmost index
                int left = 0, right = i;
                while (left <= right) {
                    int mid = left + (right - left) / 2;
                    if (prefix[i] - (mid > 0 ? prefix[mid - 1] : 0) >= target) {
                        minLength = min(minLength, i - mid + 1);
                        right = mid - 1;
                    } else {
                        left = mid + 1;
                    }
                }
            }
        }

        return (minLength == INT_MAX) ? 0 : minLength;
    }
};

// @lc code=end
