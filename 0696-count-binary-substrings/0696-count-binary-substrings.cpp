class Solution {
public:
    int countBinarySubstrings(string s) {
        int ans = 0;
        int currGroup = 1;
        int prevGroup = 0;
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) {
                currGroup++;
            } else {
                ans += min(currGroup, prevGroup);
                prevGroup = currGroup;
                currGroup = 1;
            }
        }
        ans += min(currGroup, prevGroup);
        return ans;
    }
};