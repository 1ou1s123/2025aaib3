// week09-1.cpp 學習計畫 Matrix 矩陣第1題 Easy題
// LeetCode 1672. Richest Customer Wealth
// j=0 1 2
// i=0 1,2,3
// i=1 3,2,1
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int M = accounts.size(), N = accounts[0].size();
        // 左手 M 右手 N
        int ans = 0;
        for (int i = 0; i < M; i++) { // 左手 i 第 i 個人的存款
            int now = 0;
            for (int j = 0; j < N; j++) { // 右手 j
                now += accounts[i][j];    // 左手 i 右手 j
                // 第 i 人，在第 j 銀行存的錢
            }
            ans = max(ans, now); // 找最有錢的人，取最大值
        }
        return ans;
    }
};
