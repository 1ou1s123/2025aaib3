// week9-4.cpp 矩陣題 Matrix 題型 AI影片 (三種題) Leet 常考資料轉載看
// 54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();
        int top = 0, bottom = M - 1, left = 0, right = N - 1;
        vector<int> ans;
        while (top <= bottom && left <= right) {
            // 1. 先掃 top 行
            for (int j = left; j <= right; j++) {
                ans.push_back(matrix[top][j]);
            }
            top++;
            if (top > bottom) break; // 若超出範圍則結束

            // 2. 掃 right 列
            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;
            if (left > right) break; // 若超出範圍則結束

            // 3. 掃 bottom 行
            for (int j = right; j >= left; j--) {
                ans.push_back(matrix[bottom][j]);
            }
            bottom--;
            if (top > bottom) break; // 若超出範圍則結束

            // 4. 掃 left 列
            for (int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
            if (left > right) break; // 若超出範圍則結束
        }
        return ans;
    }
};
