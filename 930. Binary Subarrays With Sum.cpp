class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mp;
        mp[0] = 1;
        int cnt = 0, sum = 0;
        for(int i = 0 ; i < nums.size();i++){
            sum += nums[i];
            if(mp.count(sum - goal)){
                cnt += mp[sum - goal];
            }
            mp[sum]++;
        }
        return cnt;
    }
};
