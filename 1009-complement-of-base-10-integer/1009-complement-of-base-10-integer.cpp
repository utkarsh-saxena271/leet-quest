class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;
        if(n == 1) return 0;
        int ans = 0;
        int pos = 0;
        while(n > 0){
            if((n&1) == 0){
                ans = ans | (1 << pos);
            }
            pos++;
            n = n >>1;
        }
        return ans;
    }
};