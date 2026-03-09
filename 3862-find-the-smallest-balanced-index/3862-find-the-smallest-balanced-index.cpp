class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {
        long long int n = nums.size();
        const long long LIMIT = 1e14;

        vector<long long> suffix(n, 1);

        long long prod = 1;

        for(int i=n-2 ; i>=0 ; i--){
            if((prod > LIMIT/nums[i+1])) prod = LIMIT+1;
            else prod *= nums[i+1];

            suffix[i] = prod;
        }

        long long leftSum = 0;

        for(int i=0 ; i<n ; i++){
            if(leftSum == suffix[i]) return i;

            leftSum += nums[i];
        }

        return -1;
    }
};