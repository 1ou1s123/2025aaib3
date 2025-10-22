// week07-3.cpp LeetCode �ǲ߭p�e Simulation ��1�D
// 682. Baseball Game �p���I��
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a; // Part04: �n���ơA���}�C a �̭�
        for (string op : operations) { // Part01: C++ �i���j��
            //cout << "�{�b�ݨ쪺�O�G" << op << "\n"; // Part02: �ݥ��O�֡A���@�U�R��
            // Part03: �@�� if �P�_�n������
            if (op[0] == 'C') { // Clean: �M���̫�@��
                a.pop_back(); // �h���̫�@�� // Part06: pop_back()
            } else if (op[0] == 'D') { // ��ӳ̫�1�ӵP�u��2���A�A�[��̫᭱�v
                a.push_back(a.back() * 2); // ��2�� Part06: back()
            } else if (op[0] == '+') { // �٤����D�A���@�U�A��
                int temp = a.back(); // �����̫�1�ӵP�����P
                a.pop_back(); // ��̫�1�x���P�Ȱ��^��
                int temp2 = a.back(); // �i�H�ۭ˼Ʋ�2�x�������P
                a.push_back(temp); // ���谱�^�Ӫ��A��^�h
                a.push_back(temp + temp2); // ��̫�2�ӥ[�_�ӡA�A�u�[��̫᭱�v
            } else { // �Ʀr���r����int�A�n�u�[��̫᭱�v
                a.push_back(stoi(op)); // Part04: push_back()
            }
        }

        int ans = 0;
        for (int now : a) { // Part05: C++ �i���j�� �n�ݰ}�C���ȡA������[�_��
            ans += now;
            //cout << now << " "; // Part02: �ݥ��O�֡A���@�U�R���]�ݰ}�C�̪��ȡ^
        }

        return ans; //return 0; // ���H�K return ���@�U�A�g�u�u�����סv
    }
};
