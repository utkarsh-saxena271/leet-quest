class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool flag = false;
        int t = n;
        while(n!=0){
            t = t>>1;
            if((n&1) != (t & 1)){
                flag = true;
            }else{
                return false;
            }
            n = n>>1;
        }
        return flag;
    }
};