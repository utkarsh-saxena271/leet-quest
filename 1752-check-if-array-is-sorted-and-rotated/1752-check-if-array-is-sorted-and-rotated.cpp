class Solution {
public:
    bool check(vector<int>& nums) {
        int diff = 0;
        int n = nums.size();
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > nums[(i+1) % n]){
                diff++;
            }
        }
        return diff <=1 ? true : false;
    }
};