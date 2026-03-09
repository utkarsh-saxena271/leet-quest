class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        string ans = "";
        unordered_set<string> st(nums.begin(), nums.end());

        return solve(0, "", n , st);
    }

    string solve(int i, string s , int n, unordered_set<string> &st){
        if(i==n){
            if(st.find(s) == st.end()){
                return s;
            }
            return "";
        }

        string res = solve(i+1, s+'0', n , st);
        if(!res.empty()) return res;

        res = solve(i+1, s+'1', n , st);
        return res;
    }
};