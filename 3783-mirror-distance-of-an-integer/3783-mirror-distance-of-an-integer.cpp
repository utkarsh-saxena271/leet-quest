class Solution {
public:
    int mirrorDistance(int n) {
        long long a = 0;
        int o = n;
        while(n>0){
            long long r = n % 10;
            n = n / 10;
            a = (a*10) + r;
        }
        return abs(o-a);
    }
};