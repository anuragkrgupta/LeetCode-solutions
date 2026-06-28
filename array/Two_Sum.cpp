// # 1. Two Sum

// **Difficulty:** Easy

// Given an integer array and a target, return the indices of the two numbers whose sum equals the target.

// ## Approach
// Use an unordered_map to store previously seen numbers and their indices.

// - Time Complexity: O(n)
// - Space Complexity: O(n)


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};