class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int ans = INT_MIN;
        int n = colors.size();

        int i = 0, j = colors.size()-1;

        while(i < colors.size() && j >= 0){
            if(colors[i] != colors[j]){
                ans = max(ans, abs(i-j));
                j--;
            }else{
                i++;
            }
        }
        i = 0, j = colors.size()-1;
        while(i < colors.size() && j >= 0){
            if(colors[i] != colors[j]){
                ans = max(ans, abs(i-j));
                i++;
            }else{
                j--;
            }
        }



        return ans;
    }
};