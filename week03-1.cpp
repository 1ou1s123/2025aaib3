#include <iostream>  /// cin cout �n�Ϊ�
#include <vector>    /// ���Ѫ��D�D �}�C vector
using namespace std; /// ���n�ѤF�u�ϥΩR�W�Ŷ��v std

int main()
{
    cout << "�п�J 4 �ӼƦr: ";
    vector<int> a;   /// �u���Y�ۦp�v���}�C
    int now;

    for (int i = 0; i < 4; i++) {
        cin >> now;          /// �{�b��J 1 �ӼƦr
        a.push_back(now);    /// ���� a ���̫᭱
    }

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << ' '; /// �Ƨ��᭱, ���Ů�
    }

    cout << "\n�{�b�{���X��, �S���J�F 99 88 ��ӼƦr... ���G�O?\n";
    // cin >> now;   /// �{�b�A��J 1 �ӼƦr
    a.push_back(99); /// ���� a ���̫᭱
    a.push_back(88); /// ���� a ���̫᭱

    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << ' '; /// �Ƨ��᭱, ���Ů�
    }
}

