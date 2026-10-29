//Problem: Intersection of two sorted arrays
//Difficulty:Easy
//Approach: Two pointers on sorted arrays
//Time Complexity: O(n+m)
//Space Complexity: O(1)(excluding output)
class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        vector<int> ans;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                i++;
            }
            else if(nums1[i]==nums2[j]){
                ans.push_back(nums1[i]);
                i++;
                j++;

            }
            else{
                j++;
            }
        }
        return ans;

    }
};