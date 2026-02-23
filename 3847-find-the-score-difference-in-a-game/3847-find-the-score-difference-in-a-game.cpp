class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int score1 = 0;
        int score2 = 0;
        bool p1 = true;
        bool p2 = false;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]%2 != 0){
                swap(p1,p2);
            }
            if(i%6 == 5){
                swap(p1,p2);
            }
            if(p1) score1 += nums[i];
            if(p2) score2 += nums[i];
        }
        return score1-score2;
    }
};