class Solution {
public:
    unordered_map<char, int> mp = { {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    int romanToInt(string s) {
        int sum = 0;
        for(int i = 0 ; i <s.size() -1 ;i++){
            if(mp[s[i]] < mp[s[i + 1]]){
                sum -= mp[s[i]];
            }
            else sum += mp[s[i]];
        }
        return sum + mp[s[s.size() - 1]];
    }
};
