// week04-3.cpp
// SOIT106_ADVANCE_003
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;
    for (int i = 0; i < 10; i++) {
        int now;
        cin >> now;
        if (now == 0) break;   // 輸入 0 就停止
        a.push_back(now);      // 把數字加到 vector
    }

    // 倒著輸出
    for (int i = (int)a.size() - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }

    cout << "\n";
}
