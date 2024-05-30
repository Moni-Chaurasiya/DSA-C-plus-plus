class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        // making first column all onces
        for (int i = 0; i < m; i++) {
            if (grid[i][0] == 0) {
                for (int j = 0; j < n; j++) {
                    if (grid[i][j] == 0) {
                        grid[i][j] = 1;
                    } else {
                        grid[i][j] = 0;
                    }
                }
            }
        }
        // Flip columns where no of 0 is greater than 1
        for (int j = 0; j < n; j++) {
            int zero = 0;
            int one = 0;
            for (int i = 0; i < m; i++) {
                if (grid[i][j] == 0) {
                    zero++;
                } else {
                    one++;
                }
            }

            if (zero > one) {
                for (int i = 0; i < m; i++) {
                    if (grid[i][j] == 0) {
                        grid[i][j] = 1;
                    } else {
                        grid[i][j] = 0;
                    }
                }
            }
        }
     // Calculating  decimal value
         int sum=0;
     for(int i=0;i<m;i++){
        int x=1;
        for(int j=n-1;j>=0;j--){
         sum+= grid[i][j]*x;
            x=x*2;
        }
     }
     return sum;
    }
};