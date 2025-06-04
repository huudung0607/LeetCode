class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        set<int>se;
        long long sum =0;
        for(int i = 0 ; i < nums.size() - 1;i++){
            sum = nums[i] + nums[i + 1];
            if(se.count(sum)){
                return true;
            }
            se.insert(sum);
        }
        return false;
    }
};
