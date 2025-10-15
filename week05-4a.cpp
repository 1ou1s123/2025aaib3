// week05-4a.cpp
// SOIT107_ADVANCE_002
#include <iostream>
using namespace std;

int main()
{
    int now;
    cin >> now;
    int M = now, m = now;    // 初始化最大值與最小值

    for (int i = 1; i < 6; i++) {
        cin >> now;
        if (now > M) M = now;     // 更新最大值
        if (now < m) m = now;     // 更新最小值
    }

    cout << M - m;                // 輸出最大值與最小值的差
}
