class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        unordered_map<int,int> dp;
        int maxlen = 1;
        for(int i = 0; i < arr.size();i++){
            if(dp.count(arr[i] - difference)){
                dp[arr[i]] = dp[arr[i] - difference] + 1;
            }
            else dp[arr[i]] = 1;
            maxlen = max(maxlen,dp[arr[i]]);
        }
        return maxlen;
    }
};
