class Solution {
public:
    int pivotInteger(int n) {
        // int total = n * (n + 1) / 2;
        // int x = sqrt(total);
        
        // if (x * x == total) return x;
        // return -1;
        int total = n * (n + 1) / 2;
        int leftSum = 0;
        
        for(int i = 1; i <= n; i++) {
            leftSum += i;
            int rightSum = total - leftSum + i;
            
            if(leftSum == rightSum) return i;
        }
        
        return -1;
    }
};