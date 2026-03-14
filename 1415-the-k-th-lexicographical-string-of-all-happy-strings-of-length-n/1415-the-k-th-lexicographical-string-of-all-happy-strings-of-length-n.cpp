class Solution {
public:
    string getHappyString(int n, int k) {
        vector<string> ans;
        string s = "";
        genstring(ans, s, n);

        if(ans.size() < k) return "";
        return ans[k-1];
    }
    void genstring(vector<string>& ans,string& s, int n){
        if(s.size() == n){
            ans.push_back(s);
            return;
        }

        for(char ch : {'a','b','c'}){
            if(s.empty() || s.back() != ch){
                s.push_back(ch);
                genstring(ans, s, n);
                s.pop_back();
            }
        }
    }
};