class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int temp = x;
        long long pal = 0;
        while(temp > 0){
            int r = temp%10;
            pal = (10*pal) + r;
            temp = temp / 10;
        }
        if(pal == x) return true;
        return false;
    }
};