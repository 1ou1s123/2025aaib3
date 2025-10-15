// week05-1.cpp
// LeetCode 學習題 Built-in Functions 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);  // 把字串當 iostream 的 cin 來用
        string word;  // 字串
        // ss >> word; // 這樣是 cin >> word，現在的 ss 可以用 ss >> word
        // ss >> word; // 讀第二次，會讀到第2個字
        while (ss >> word) {  // 一直讀，讀到最後
            // 理面什麼事都沒有做
        }
        cout << word;  // 先做一個實驗，看讀到誰
        return word.length();  // 最後，把長度送出去
    }
};
