// Problem: Max Consecutive Ones
// Difficulty: Easy
// Approach: Single pass, keep a running count of consecutive 1s, reset to 0 on hitting a 0, track the max count seen
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, maxc = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count += 1;
                maxc = max(maxc, count);
            } else {
                count = 0;
            }
        }
        return maxc;
    }
};