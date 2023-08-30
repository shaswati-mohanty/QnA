//https://leetcode.com/problems/maximum-subarray/
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = size(nums);
        int maxEndingHere = nums[0]; // Maximum subarray sum ending at the current index
        int maxSoFar = nums[0]; // Maximum subarray sum seen so far

        for (int i = 1; i < n; ++i) {
            maxEndingHere = max(nums[i], maxEndingHere + nums[i]);
            maxSoFar = max(maxSoFar, maxEndingHere);
        }

        return maxSoFar;
    }
};
