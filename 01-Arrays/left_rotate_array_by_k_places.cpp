// Problem: Left Rotate Array by K Places
// Difficulty: Easy
// Approach: Reversal algorithm - reverse first k elements, reverse remaining, then reverse whole array
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {

        int n= nums.size();
        k=k%n;
      
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
        reverse(nums.begin(), nums.end());
       
        
    }
};
   