class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> endzero(n,0);
        for(int i = 0; i < n; i++){
            int c = 0;
            for(int j = n-1; j >= 0; j--){
                if(grid[i][j] == 0){
                    c++;
                }else if(grid[i][j] == 1){
                    break;
                }
            }
            endzero[i] = c;
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            int need = n-i-1;
            int j = i;
            while(j < n && endzero[j] < need){
                j++;
            }
            if(j==n) return -1;
            ans += j-i;
            while(j > i){
                swap(endzero[j],endzero[j-1]);
                j--;
            }
        }
        return ans;
    }
};