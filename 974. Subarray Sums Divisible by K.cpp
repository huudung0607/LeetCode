class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int sum = 0;
        mp[0] = 1;
        int ans = 0;
        for(int i = 0 ; i < nums.size();i++){
            sum += nums[i];
            sum = (sum % k + k) % k;
            if(mp.count(sum)){
                ans += mp[sum];
            }
            mp[sum]++;
        }
        return ans;
    }
};
