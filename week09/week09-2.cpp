// LeetCode 73. Set Matrix Zeroes
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // 第一步，先找所有 0，並記下它的行與列
        int M = matrix.size(), N = matrix[0].size();
        vector<bool> markI(M), markJ(N); // 標記行 i 與列 j

        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (matrix[i][j] == 0) { // 遇到 0，記下
                    markI[i] = true;    // 第 i 行要歸零
                    markJ[j] = true;    // 第 j 列要歸零
                }
            }
        }

        // 第二步，把記下來的行與列全部設成 0
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (markI[i] == true || markJ[j] == true)
                    matrix[i][j] = 0;
            }
        }
    }
};
