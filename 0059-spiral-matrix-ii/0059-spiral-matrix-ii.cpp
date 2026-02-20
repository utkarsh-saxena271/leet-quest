class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n));

        int minRow = 0;
        int minCol = 0;
        int maxRow = n - 1;
        int maxCol = n - 1;
        int val = 1;

        while (minRow <= maxRow && minCol <= maxCol) {
            for (int i = minCol; i <= maxCol; i++) {
                ans[minRow][i] = val++;
            }
            minRow++;

            for (int i = minRow; i <= maxRow; i++) {
                ans[i][maxCol] = val++;
            }
            maxCol--;

            if (minRow <= maxRow) {
                for (int i = maxCol; i >= minCol; i--) {
                    ans[maxRow][i] = val++;
                }
                maxRow--;
            }
            
            if (minCol <= maxCol) {
                for (int i = maxRow; i >= minRow; i--) {
                    ans[i][minCol] = val++;
                }
                minCol++;
            }
        }

        return ans;
    }
};