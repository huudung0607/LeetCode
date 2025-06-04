class Solution {
public:
    bool check(vector<int> a,int h, int mid){
        long long cnt =0;
        for(int i = 0;i < a.size(); i++){
            if(a[i] % mid == 0){
                cnt += a[i]/mid;
            }
            else cnt += (a[i]/mid) + 1;
        }
        return cnt <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = *max_element(piles.begin(),piles.end());
        int res = -1;
        while(l <= r){
            int m = (l + r)/2;
            if(check(piles,h,m)){
                res = m;
                r = m - 1;
            }
            else l = m + 1;
        }
        return res;
    }
};
