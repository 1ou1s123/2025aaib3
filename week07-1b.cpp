// week07-1b.cpp
// TAICA NYCU 國立陽明交通大學電機系 期中考第6題
// Input: 1-9 的數字  Output:  變圓圈的方形
// ex. Input: 3
// 3 3 3 3 3
// 3 2 2 2 3
// 3 2 1 2 3
// 3 2 2 2 3
// 3 3 3 3 3 總共5層樓
// Input 2 看3層樓, Input 3 看5層樓, Input 4 看7層樓, Input 5 看9層樓
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;  /// Step01: Input

    for (int i=1; i<2*n; i++) {  /// Step03: for迴圈, 樓層
        for (int j=1; j<2*n; j++) {  /// 牆壁格
            if(j>1) cout << " ";  /// Step05: 火車頭 + 牆牆 + 牆牆 + 牆牆
            int d = max(abs(i-n), abs(j-n));  /// Step06: 找離中心的最大值
            cout << d+1;  /// Step06: 層數 +1
        }
        // cout << " 現在是第 i 樓, i:" << i;  /// Step04: 樓層應架 (練會拆掉)
        cout << endl;  /// Step02: Output, 跳行
    }
}
