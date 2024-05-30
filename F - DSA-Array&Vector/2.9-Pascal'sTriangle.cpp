class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
        vector<vector<int>> t;
        for (int i = 1; i <= n; i++) {
            vector<int> s(i);
            t.push_back(s);
        }

        for (int i = 0; i <= n - 1; i++) {

            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i) {
                    t[i][j] = 1;

                } else {

                    t[i][j] = t[i - 1][j] + t[i - 1][j - 1];
                }
            }

        }
        return t;
    }
};