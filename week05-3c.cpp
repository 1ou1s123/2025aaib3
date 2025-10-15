/// week05-3c.cpp —— 合併 Part1/Part2 Input/Output
/// Part3: stringstream 斷字
/// Part4: 反過來 algorithm
/// CPE 這次的第2題 UVA 483 Word Scramble 把字弄反

#include <iostream>
#include <sstream>   /// Part 3: 把字串用來斷字
#include <string>
#include <algorithm> /// Part 4: 反過來，要用到 algorithm 演算法
using namespace std;

int main()
{
    string line; /// Part 1: Input
    while (getline(cin, line)) { /// 輸入一行，一直讀到 Ctrl+Z 才結束
        stringstream ss(line);   /// Part 3: 把字串用來斷字
        string word;             /// 用來斷字

        ss >> word;              /// Part 5: 先解決第一個字（不加空格）
        reverse(word.begin(), word.end());
        cout << word;            /// Part 5: 第一個字不用前面空格

        while (ss >> word) {     /// Part 3: 把剩下的字反轉
            reverse(word.begin(), word.end());
            cout << " " << word; /// Part 4: 後面的字前面要有空格
        }

        cout << endl;            /// 換行
        /// cout << line << endl; /// 先隨便印出來（測試用）
    }
}

