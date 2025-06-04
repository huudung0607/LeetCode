//https://leetcode.com/problems/longest-substring-without-repeating-characters/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r= 0, maxlenth = 0;
        set<char>se;
        for(int i = r; i < s.size();i++){
            while(se.find(s[i]) != se.end()){
                se.erase(s[l]);
                l++;
            }
            int len = (i - l) + 1;
            maxlenth = max(maxlenth,len);
            se.insert(s[i]);
        }
        return maxlenth;
    }
};
