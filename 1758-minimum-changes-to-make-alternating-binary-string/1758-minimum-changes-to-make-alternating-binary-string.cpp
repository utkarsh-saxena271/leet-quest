class Solution {
public:
    int minOperations(string s) {
        int start1 = 0;
        int start0 = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == (i % 2 == 0? '0' : '1')){
                start0++;
            }else if(s[i] == (i%2 == 0? '1' : '0')){
                start1++;
            }
        }
        return min(start0,start1);
    }
};