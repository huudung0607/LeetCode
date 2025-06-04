class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0] = -1;
        int ans= 0;
        for(int i = 0 ; i < nums.size();i++){
            ans = (ans + nums[i]) % k;
            if(mp.count(ans)){
                if(i - mp[ans] > 1){
                return true;
               }
            }
            else mp[ans] = i;
        }
        return false;
    }
};
