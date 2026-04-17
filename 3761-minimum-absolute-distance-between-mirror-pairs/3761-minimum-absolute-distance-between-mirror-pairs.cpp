class Solution {
public:
    int reverse(int n){
        int a = 0;
        while(n != 0){
            int r = n % 10;
            a = (a*10) + r;
            n = n/10;
        }
        return a;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = INT_MAX;
        for(int i = 0; i < nums.size();i++){
            if(mp.count(nums[i])){
                ans = min(ans, abs(i - mp[nums[i]]));
            }
            int temp = reverse(nums[i]);
            mp[temp] = i;
           
        }
        return ans == INT_MAX ? -1 : ans;
    }
};