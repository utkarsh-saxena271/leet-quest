class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr = 0;
        int maxO = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1){
                curr++;
            }else if(nums[i] == 0){
                maxO = max(curr, maxO);
                curr = 0;
            }
        }
        maxO = max(curr, maxO);
        return maxO;
    }
};