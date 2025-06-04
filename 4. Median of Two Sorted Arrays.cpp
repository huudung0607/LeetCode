//https://leetcode.com/problems/median-of-two-sorted-arrays/description/
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        vector<int> c(nums1.size() + nums2.size());
        int index =0;
        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] <= nums2[j]){
                c[index++] = nums1[i++];
            }
            else if(nums1[i] >= nums2[j]){
                c[index++] = nums2[j++];
            }
        }
        while(i < nums1.size()){
            c[index++] = nums1[i++];
        }
        while(j < nums2.size()){
            c[index++] = nums2[j++];
        }
        if(c.size() % 2 == 1){
            return (double)c[c.size()/2];
        }
        else{
            return (double)(c[c.size() / 2] + c[c.size() / 2 - 1]) / 2;
        }
    }
};
