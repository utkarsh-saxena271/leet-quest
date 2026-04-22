class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows==0) return {};
        if(numRows == 1) return {{1}};
        vector<vector<int>> ans;
        ans.push_back({1});
        ans.push_back({1,1});
        for(int i = 2; i < numRows; i++){
            vector<int>ds(i+1);
            ds[0]=1;
            for(int j = 1; j < i; j++){
                int val = ans[i-1][j-1] + ans[i-1][j];
                ds[j]=val;
            }
            ds[i]=1;
            ans.push_back(ds);
        }
        return ans;
    }
};