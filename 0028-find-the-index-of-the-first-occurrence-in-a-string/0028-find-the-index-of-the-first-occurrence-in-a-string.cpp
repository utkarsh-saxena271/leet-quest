class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size() < needle.size()) return -1;
        int winS = needle.size();
        for(int i = 0; i <= haystack.size() - winS; i++){
            if(needle == haystack.substr(i,winS)) return i;
        }
        return -1;
    }
};