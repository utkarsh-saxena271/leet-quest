class Solution {
public:
    int mirrorDistance(int n) {
        int temp = n;
        int rev = 0;
        while(n != 0){
            int r = n%10;
            rev = (rev*10) + r;
            n /= 10;
        }
        return abs(temp-rev);
    }
};