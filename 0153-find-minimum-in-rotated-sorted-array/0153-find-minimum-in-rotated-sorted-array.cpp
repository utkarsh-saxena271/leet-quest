class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        int ans;
         if (nums[start] <= nums[end])
            return nums[start];

        while(start < end){
            int mid = start + (end-start)/2;
            if(nums[mid] > nums[end]){
                start = mid+1;
                ans = nums[start];
            }else{
                end = mid;
            }
        }
        return ans;
    }
};