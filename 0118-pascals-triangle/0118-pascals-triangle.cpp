class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 0; i < numRows; i++){
            vector<int>ds(i+1);
            ds[0]=1;
            ds[i]=1;
            for(int j = 1; j < i; j++){
                int val = ans[i-1][j-1] + ans[i-1][j];
                ds[j]=val;
            }
            
            ans.push_back(ds);
        }
        return ans;
    }
};