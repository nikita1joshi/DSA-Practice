// Problem: Single Number
// Difficulty: Easy
// Approach: XOR trick, a number XORed with itself becomes 0, so all duplicate pairs cancel out leaving only the single number
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr=0;
        for(int i=0; i<nums.size(); i++){
             xorr=xorr^nums[i];
        }
        return xorr;
       
        
    }
}; 
   ;