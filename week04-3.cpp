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
        if (now == 0) break;   // ��J 0 �N����
        a.push_back(now);      // ��Ʀr�[�� vector
    }

    // �˵ۿ�X
    for (int i = (int)a.size() - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }

    cout << "\n";
}
