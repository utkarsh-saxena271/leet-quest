class Solution {
public:
    void findCombs(vector<int> nums, int k, int i, vector<int>& ds,
                   vector<vector<int>>& ans) {
        if (k == 0) {
            ans.push_back(ds);
            return;
        }
        for (int j = i; j <= nums.size()-k; j++) {
            ds.push_back(nums[j]);
            findCombs(nums, k - 1, j + 1, ds, ans);
            ds.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> nums(n);
        iota(nums.begin(), nums.end(), 1);
        vector<vector<int>> ans;
        vector<int> ds;
        findCombs(nums, k, 0, ds, ans);
        return ans;
    }
};