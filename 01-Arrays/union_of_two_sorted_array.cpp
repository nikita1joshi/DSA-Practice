// Problem: Union of Two Sorted Arrays
// Difficulty: Easy
// Approach: Two pointers, merge both arrays while skipping duplicates
// Time Complexity: O(n1 + n2)
// Space Complexity: O(n1 + n2)

class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        vector<int> unionArr;
        int i=0;
        int j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<=nums2[j]){
                if(unionArr.size()==0 || unionArr.back()!=nums1[i]){
                    unionArr.push_back(nums1[i]);
                }
                i++;
            }
            else {
                if(unionArr.size()==0 || unionArr.back()!=nums2[j]){
                    unionArr.push_back(nums2[j]);
                }
                j++;
            }
        }
        while(i<nums1.size()){
            if(unionArr.size()==0 || unionArr.back()!=nums1[i]){
                unionArr.push_back(nums1[i]);
            }
            i++;
        }
        while(j<nums2.size()){
            if(unionArr.size()==0 || unionArr.back()!=nums2[j]){
                unionArr.push_back(nums2[j]);
            }
            j++;
        }
        return unionArr;
    }
};