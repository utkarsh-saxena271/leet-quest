class Solution {
public:
    int lengthOfLastWord(string s) {
        while (!s.empty() && s.back() == ' ') {
            s.pop_back();
        }
        int lastspace = -1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                lastspace = i;
            }
        }
        return s.size() - lastspace - 1;
    }
};