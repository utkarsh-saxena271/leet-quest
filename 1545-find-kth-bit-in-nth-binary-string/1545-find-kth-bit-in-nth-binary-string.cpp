class Solution {
public:
    char findKthBit(int n, int k) {
        string s = "0";
        for(int i = 2; i <= n; i++){
            string temp = s;
            for(int j = 0; j < temp.size(); j++){
                if(temp[j] == '0'){
                    temp[j] = '1';
                }else{
                    temp[j] = '0';
                }
            }
            reverse(temp.begin(),temp.end());
            s += '1' + temp;
        }
        return s[k-1];
    }
};