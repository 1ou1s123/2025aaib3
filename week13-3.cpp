// week13-3.cpp 兩個 Linked List 相加
// LeetCode 2. Add Two Numbers 題意是把兩個 Linked List 裡面的數字，加到一起，需要進位(carry)

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) { // 名字看得出，產生 l1+l2 的答案
        ListNode* ans = new ListNode(999); // 放假的 999，做為假的某個節點
        ListNode* ans2 = ans; // ans2 會一格一格往後加，放新的 Linked List 答案

        int carry = 0; // 一開始進位的值是 0，運算時候調整進位
        while (l1 != nullptr || l2 != nullptr) { // 只要有 1 個不是空，就繼續

            int now = carry; // 先把進位放進 now
            if (l1 != nullptr) { // 取出 l1 的值
                now += l1->val;  // 把值加進 now
                l1 = l1->next;   // l1 下一格
            }

            if (l2 != nullptr) { // 取出 l2 的值
                now += l2->val;  // 加進 now
                l2 = l2->next;   // l2 下一格
            }

            ans2->next = new ListNode(now % 10); // 做一個新的節點，放一位數的答案
            ans2 = ans2->next; // ans2 往後等於把新的節點接上

            carry = now / 10; // 更新進位(有沒有十位數)
        }

        if (carry > 0) { // 如果最後進位 >0，還要再多一個節點，把進位放進去
            ans2->next = new ListNode(carry);
        }

        return ans->next;
    }
};
