// week03-3a.cpp 二合一
// LeetCode 學習計畫 1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; // 1 乘上任何數，就突然變成「任何數」
        for (int i = 0; i < nums.size(); i++) {
            ans *= nums[i]; // 把陣列「乘進去」
        }
        if (ans > 0) return 1;
        if (ans < 0) return -1;
        return 0;
    }
};
