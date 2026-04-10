class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int ans = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            vector<int> idx;
            for(int j = 0; j < nums.size(); j++){
                if(nums[i] == nums[j]){
                    idx.push_back(j);
                }
            }
            if(idx.size() >= 3){
                for(int k = 0; k + 2 < idx.size(); k++){
                    int dist = 2 * (idx[k+2] - idx[k]);
                    ans = min(ans, dist);
                }
            }          
        }
        return ans == INT_MAX ? -1 : ans;
    }
};