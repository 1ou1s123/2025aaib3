#include <iostream>  /// cin cout 要用的
#include <vector>    /// 今天的主題 陣列 vector
using namespace std; /// 不要忘了「使用命名空間」 std

int main()
{
    cout << "請輸入 4 個數字: ";
    vector<int> a;   /// 「伸縮自如」的陣列
    int now;

    for (int i = 0; i < 4; i++) {
        cin >> now;          /// 現在輸入 1 個數字
        a.push_back(now);    /// 推到 a 的最後面
    }

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << ' '; /// 數完後面, 有空格
    }

    cout << "\n現在程式碼裡, 又推入了 99 88 兩個數字... 結果呢?\n";
    // cin >> now;   /// 現在再輸入 1 個數字
    a.push_back(99); /// 推到 a 的最後面
    a.push_back(88); /// 推到 a 的最後面

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << ' '; /// 數完後面, 有空格
    }
}

