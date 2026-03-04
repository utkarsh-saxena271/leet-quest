// space- o(1)
class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int ans = 0;
        
        for (int i = 0; i < m; i++) {
            int rowones = 0;
            int colidx = -1;
            
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 1) {
                    rowones++;
                    colidx = j;
                }
            }
            
            if (rowones == 1) {
                int colones = 0;
                for (int k = 0; k < m; k++) {
                    if (mat[k][colidx] == 1) {
                        colones++;
                    }
                }
                if (colones == 1) {
                    ans++;
                }
            }
        }
        return ans;
    }
};


// time - o(m*n), space - o(m+n)
// class Solution {
// public:
//     int numSpecial(vector<vector<int>>& mat) {
//         int ans = 0;
//         vector<int> rowct(mat.size(),0);
//         vector<int> colct(mat[0].size(),0);
//         for(int i = 0; i < mat.size(); i++){
//             for(int j = 0; j < mat[i].size(); j++){
//                 if(mat[i][j] == 1){
//                     rowct[i]++;
//                     colct[j]++;
//                 }
//             }
//         }
//         for(int i = 0; i < mat.size(); i++){
//             for(int j = 0; j < mat[i].size(); j++){
//                 if(mat[i][j] == 1 && rowct[i] == 1 && colct[j] == 1){
//                     ans++;
//                 }
//             }
//         }
//         return ans;
//     }
// };