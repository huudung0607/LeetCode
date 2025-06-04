class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> F(nums.size());
        F[0] = nums[0];
        for(int i = 1;  i < nums.size();i++){
            F[i] = F[i - 1] + nums[i];
        }
        return F;
    }
};
