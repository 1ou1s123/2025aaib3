// week05-4a.cpp
// SOIT107_ADVANCE_002
#include <iostream>
using namespace std;

int main()
{
    int now;
    cin >> now;
    int M = now, m = now;    // ��ʼ�����ֵ�c��Сֵ

    for (int i = 1; i < 6; i++) {
        cin >> now;
        if (now > M) M = now;     // �������ֵ
        if (now < m) m = now;     // ������Сֵ
    }

    cout << M - m;                // ݔ�����ֵ�c��Сֵ�Ĳ�
}
