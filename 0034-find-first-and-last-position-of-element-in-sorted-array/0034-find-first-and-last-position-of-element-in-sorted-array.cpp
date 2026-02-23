class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans = {-1,-1};
        bool visited = false;
        int curridx = -1;
        int lastidx = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target && visited == false){
                ans[0] = i;
                visited = true;
                curridx = i;
            }
            if(nums[i] == target && visited){
                curridx = i;
                lastidx = max(curridx,lastidx);
            }
        }
        ans[1] = lastidx;
        return ans;
    }
};