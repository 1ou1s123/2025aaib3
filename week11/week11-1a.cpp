// week11-1a.cpp   挑戰題 二合一, 先用（笨方法）寫一次
// LeetCode 2154. Keep Multiplying Found Values by Two
// 如果 nums 中找到原始值，則將原始值乘以 2
// 在找不到時，返回原始值

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        while (1) {   // 開始無限迴圈
            int found = 0;  // 開始設置標誌位為未找到
            for (int i = 0; i < nums.size(); i++) { // 遍歷所有 nums 中的值
                if (nums[i] == original) found = 1;  // 找到，設置為已找到
            }

            if (found == 0) {  // 未找到，返回原始值
                return original;
            } else {
                original = original * 2;  // 有找到，將原始值乘以2，繼續循環
            }
        }
        return original;
    }
};
