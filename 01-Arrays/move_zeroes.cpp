// Problem: Move Zeroes
// Difficulty: Easy
// Approach: Two pointers - swap non-zero elements to the front, zeroes naturally shift to the end
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s=0;
        for(int e=0; e<nums.size(); e++){
           if(nums[e]!=0){
                swap(nums[s], nums[e]);
                s++;
           }
        }
        
    }
};