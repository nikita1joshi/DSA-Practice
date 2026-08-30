// Problem: Rotate Array by One (Left Rotation)
// Difficulty: Easy
// Approach: Store first element in temp, shift all elements left by one, place temp at the end
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {

        int n= nums.size();
        int temp=nums[0];
        for(int i=0; i<n-1; i++){
            nums[i]=nums[i+1];
        }
        nums[n-1]=temp;
       
        
    }
};
    