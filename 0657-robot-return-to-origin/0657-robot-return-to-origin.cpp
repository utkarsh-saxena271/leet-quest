class Solution {
public:
    bool judgeCircle(string moves) {
        int up = 0, down = 0, left = 0, right = 0;
        for(char c : moves){
            if(c == 'U') up++;
            else if(c == 'D') down++;
            else if(c == 'R') right++;
            else if(c == 'L') left++;
        }
        if((up == down) && (left == right)) return true;
        return false;
    }
};