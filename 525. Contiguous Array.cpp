class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        mp[0] = -1;
        int sum = 0, maxval = 0;
        for(int i = 0; i < nums.size();i++){
            if(nums[i] == 1) sum++;
            else sum--;
            if(mp.count(sum)){
                maxval = max(maxval,i - mp[sum]);
            }
            else mp[sum] = i;
        }
        return maxval;
    }
};
