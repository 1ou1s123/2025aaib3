// week07-3.cpp LeetCode 學習計畫 Simulation 第1題
// 682. Baseball Game 計算點數
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a; // Part04: 要把資料，放到陣列 a 裡面
        for (string op : operations) { // Part01: C++ 進階迴圈
            //cout << "現在看到的是：" << op << "\n"; // Part02: 看它是誰，等一下刪掉
            // Part03: 一堆 if 判斷要怎麼模擬
            if (op[0] == 'C') { // Clean: 清掉最後一位
                a.pop_back(); // 去掉最後一個 // Part06: pop_back()
            } else if (op[0] == 'D') { // 原來最後1個牌「乘2倍，再加到最後面」
                a.push_back(a.back() * 2); // 乘2倍 Part06: back()
            } else if (op[0] == '+') { // 還不知道，等一下再看
                int temp = a.back(); // 先取最後1個牌的車牌
                a.pop_back(); // 把最後1台車牌暫停回來
                int temp2 = a.back(); // 可以抄倒數第2台車的車牌
                a.push_back(temp); // 把剛剛停回來的再放回去
                a.push_back(temp + temp2); // 把最後2個加起來，再「加到最後面」
            } else { // 數字的字串轉int，要「加到最後面」
                a.push_back(stoi(op)); // Part04: push_back()
            }
        }

        int ans = 0;
        for (int now : a) { // Part05: C++ 進階迴圈 要看陣列的值，把全部加起來
            ans += now;
            //cout << now << " "; // Part02: 看它是誰，等一下刪掉（看陣列裡的值）
        }

        return ans; //return 0; // 先隨便 return 等一下再寫「真的答案」
    }
};
