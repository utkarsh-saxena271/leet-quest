class Solution {
public:
    void findSubs(vector<int> nums, int idx, vector<int>& ds, vector<vector<int>>& ans){
        if(idx == nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[idx]);
        findSubs(nums, idx+1, ds, ans);
        ds.pop_back();
        findSubs(nums, idx+1, ds, ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        findSubs(nums, 0, ds, ans);
        return ans;
    }
};