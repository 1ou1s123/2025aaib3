// week11-1b.cpp挑戰題 二合一,聰明的方法,用到沒教過的HashMap or HashSet
// LeetCode 2154. Keep Multiplying Found Values by Two
// 每次乘2倍,把沒有出現的數字 return 出來
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> numsSet;  // HashSet 可以快速找到,有沒有這個數
        for (int num : nums) numsSet.insert(num);  //C++的進階迴圈
        //請問 original 有沒有在
        while (numsSet.find(original) != numsSet.end()) {  // 如果找到原始值
            original = original * 2;
        }

        return original;
    }
};
