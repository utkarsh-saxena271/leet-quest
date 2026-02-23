class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string> set;
        if(s.size() < k) return false;
        for(int i = 0; i <= (s.size())-k; i++){
            set.insert(s.substr(i,k));
            if(set.size() == pow(2,k)){
                return true;
            }
        }
        return false;
    }
};