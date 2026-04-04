class Solution {
public:
    void findCombs(int n, int k, int i, vector<int>& ds,
                   vector<vector<int>>& ans) {
        if (k == 0) {
            ans.push_back(ds);
            return;
        }
        for (int j = i; j <= n-k+1; j++) {
            ds.push_back(j);
            findCombs(n, k - 1, j + 1, ds, ans);
            ds.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombs(n, k, 1, ds, ans);
        return ans;
    }
};