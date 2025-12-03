// week13-2b.cpp 學習計劃 Linked List 第1題
// 申明鏈結時，要寫 new ListNode(999) 產生新的 node
// 練習用 ans->next 把 node 接起來
// LeetCode 21. Merge Two Sorted Lists
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* ans = new ListNode(999); // 不管理由，舉例 999
        ListNode* ans2 = new ListNode(888); // 不管理由，舉例 888

        ans->next = ans2; // 接起來

        return ans; // 這個回傳，就可以從 node 999 的下一個，接 888
    }
};
