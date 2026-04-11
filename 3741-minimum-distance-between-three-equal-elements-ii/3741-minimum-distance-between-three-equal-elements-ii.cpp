class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> freqmp;
        int ans = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            freqmp[nums[i]].push_back(i);
        }

        for(auto itr : freqmp){
            vector<int> vec = itr.second;
            if(vec.size()>=3){
                for(int k = 0; k + 2 < vec.size(); k++){
                    int dist = 2 * (vec[k+2] - vec[k]);
                    ans = min(ans, dist);
                }
            }
        }

        return ans == INT_MAX ? -1 : ans;
    }
};