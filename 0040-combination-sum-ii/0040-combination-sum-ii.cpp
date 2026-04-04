class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        findcombs(candidates, target, 0, ds, ans);
        return ans;
    }
    void findcombs(vector<int> candidates, int target, int idx, vector<int>& ds,
                   vector<vector<int>>& ans) {

        if (target == 0) {
            ans.push_back(ds);
            return;
        }

        for (int i = idx; i < candidates.size(); i++) {
            if (i > idx && candidates[i] == candidates[i - 1])
                continue;

            if (candidates[i] > target) break;

            ds.push_back(candidates[i]);
            findcombs(candidates, target - candidates[i], i + 1, ds, ans);
            ds.pop_back();
        }
    }
};