class Solution {
public:
    int numSteps(string s) {
        int steps = 0;
        int carry = 0;
        for(int i = s.size()-1; i > 0; i--){
            if((s[i] - '0') + carry == 1 ){
                steps += 2;
                carry = 1;
            }else if(((s[i] - '0') + carry == 0) || ((s[i] - '0') + carry == 2) ){
                steps++;
            }
        }
        return steps+carry;
    }
};