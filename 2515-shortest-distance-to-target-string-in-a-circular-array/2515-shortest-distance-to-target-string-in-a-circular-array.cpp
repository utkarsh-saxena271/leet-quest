class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int steps = words.size();
        int n = words.size();

        for(int i = 0; i < n; i++){
            if(words[i] == target){
                steps = min(steps, min(abs(i-startIndex),n - abs(i-startIndex)));
            }
        }
        return steps<n?steps:-1;
    }
};