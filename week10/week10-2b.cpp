// week10-2b.cpp 厩策璸秖 Math 材1肈 (ノ计厩ㄓ秆ウ)
// LeetCode 1523. Count Odd Numbers in an Interval Range
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high - low) / 2; // Τ, 琌计
        if (low%2==1 || high%2==1) ans++; // Τ计 ++
        return ans;
    }
};
