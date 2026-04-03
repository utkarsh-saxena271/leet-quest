class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sum(candidates, target, 0, ans, ds);
        return ans;
    }
    void sum(vector<int>& candidates, int target, int idx,
             vector<vector<int>>& ans, vector<int>& ds) {
        if (idx == candidates.size()) {
            if (target == 0) {
                ans.push_back(ds);
            }
            return;
        }
        if (candidates[idx] <= target) {
            ds.push_back(candidates[idx]);
            sum(candidates, target - candidates[idx], idx, ans, ds);
            ds.pop_back();
        }

        sum(candidates, target, idx + 1, ans, ds);
    }
};