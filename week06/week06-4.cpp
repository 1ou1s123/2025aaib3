// week06-4.cpp 昨天的LeetCode簡單題
// 3349. Adjacent Increasing Subarrays Detection I
// nums 陳列裡, 數字有些會增加 請問有沒有2個相鄰陳列, 裡面都是增加?
// ex. 2,5,7,8,9,2,3,4,3,1
// combo 1 2 3 4 5 1 沒有比較大，就不會再增加，用原來的值1
class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        // 使用遊戲常見的 combo 連續
        int N = nums.size(); // 陣列大小
        vector<int> combo(N, 1); // 有N格,裡面都放 原來值1
        for (int i = 1; i < N; i++) {
            if (nums[i-1] < nums[i]) combo[i] = combo[i-1] + 1;
        }// 檢查 combo 是否有兩個區間符合，有符合就回傳true
        // 不用檢查同時發生的情況，combo 的增加是持續遞增的結果
        for (int i = 0; i < N - k; i++) {
            if (combo[i] >= k && combo[i+k] >= k) return true;
        }

        return false;
    }
};
