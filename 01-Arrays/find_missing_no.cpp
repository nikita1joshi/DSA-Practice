// Problem: Find Missing Number
// Difficulty: Easy
// Approach: XOR trick, XOR of 0 to n cancels out with XOR of array elements, leaving the missing number
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=n;
        for(int i=0; i<n; i++){
            ans=nums[i]^i^ans;
        }
        return ans;
    }
};