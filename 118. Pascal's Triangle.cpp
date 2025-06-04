class Solution {
public:
    int F[55][55];
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        for(int i = 0; i < numRows;i++){
            vector<int>tmp;
            for(int j = 0 ; j <= i;j++){   
                if(j == 0 || j == i){
                    F[i][j] = 1;
                }
                else F[i][j] = F[i - 1][j] + F[i - 1][j - 1];
                tmp.push_back(F[i][j]);    
            }
            v.push_back(tmp);
        }
        return v;
    }
};
