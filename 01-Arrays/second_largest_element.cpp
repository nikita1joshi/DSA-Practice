// Problem: Find the Second Largest Element in an Array
// Difficulty: Easy
// Approach: Single pass, track largest and second largest together
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
       int largest=nums[0];
       int slarge=INT_MIN;
       if(nums.size()<2){
            cout<<"Only one element is there in nums"<<endl;
            return 0;
       }
       if(nums.size()>=2){
            for(int i=1; i<nums.size(); i++){
                if(nums[i]>largest){
                    slarge=largest;
                    largest = nums[i];
                
                }
                else if(nums[i]<largest && nums[i]>slarge){
                    slarge=nums[i];
                }

            } 
            if(slarge==INT_MIN){
                    return -1;
                }  
       
       }
        return slarge;
      
    }
};