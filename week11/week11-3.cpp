class Solution {
public:
    string addBinary(string a, string b) {
      int i = a.length() - 1, j = b.length() - 1; // 字串長度
vector<int> ans;  // 用來存加法後的每位，把答案先塞入
int carry = 0;    // 進位的部分

while (i >= 0 || j >= 0) { // 要一直做，加法從右邊做，在右邊
    int now = carry; // 現在這個位數 (進位加進來)

    if (i >= 0) { // 字串 a 的位數還可以加
        now += a[i] - '0'; // 字串的字母 a[i] 脫掉字母的皮，變成數字
        i--; // 在左一位
    }

    if (j >= 0) { // 字串 b 還可以加
        now += b[j] - '0'; // 字串變數值
        j--; // 在左一位
    }

    ans.push_back(now % 2); // 把二進位的值做，記在 ans 裡
    carry = now / 2;        // 新的進位部分
}

if (carry > 0) ans.push_back(carry); // 繼續加回來 (直式加法)

string strAns = "";
// 把最後要輸出的字串，當答案
for (int i = ans.size() - 1; i >= 0; i--) { // 想把答案倒回來 (因為 ans 是從後面開始塞的)
    strAns = strAns + (char)(ans[i] + '0'); // 把數字，變字母，再加進來
}

return strAns;

    }
};
