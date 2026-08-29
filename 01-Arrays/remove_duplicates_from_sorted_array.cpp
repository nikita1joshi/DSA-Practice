//Problem: Remove Duplicates From Sorted Array
//Difficulty: Easy
//Approach: Two Pointers - i tracks position of last unique element, j scans array
//Time Complexity: O(n), Space Complexity: O(1)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int i=0;
       for(int j=1; j<nums.size(); j++){
        if(nums[j]!=nums[i]){
            nums[i+1]=nums[j];
            i++;
        }
       }
       return i+1;
     
    
    }
};