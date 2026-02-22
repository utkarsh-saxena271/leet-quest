class Solution {
public:
    int binaryGap(int n) {
        int pos = 0;
        int maxD = 0;
        int last = -1;
         while (n > 0) {
            if (n & 1) {           
                if (last != -1) {
                    maxD = max(maxD, pos - last);
                }
                last = pos;
            }
            pos++;
            n >>= 1;
        }
        return maxD;
    }
};