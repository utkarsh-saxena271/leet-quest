class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        long long MOD = 1000000007;
        for(int i = 0; i < queries.size(); i++){
            int idx = queries[i][0];
            while(idx <= queries[i][1]){
                nums[idx] = (1LL * nums[idx] * queries[i][3]) % MOD;
                idx+=queries[i][2];
            }
        }
        int ans = nums[0];
        int i = 1;
        while(i < nums.size()){
            ans ^= nums[i];
            i++;
        }
        return ans;
    }
};