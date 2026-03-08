class Solution {
public:
    void getperm(vector<int>& nums, int idx, vector<vector<int>>& perm){
        if(idx == nums.size()){
            perm.push_back(nums);
            return;
        }
        for(int i = idx; i < nums.size(); i++){
            swap(nums[idx],nums[i]);
            getperm(nums,idx+1,perm);
            swap(nums[idx],nums[i]);
        }
        

    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> perm;
        getperm(nums,0,perm);
        return perm;
    }
};