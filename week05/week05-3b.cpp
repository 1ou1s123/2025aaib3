/// week05-3b.cpp —— 合併 Part1/Part2 Input/Output
/// CPE 這行考的是 UVA 483 Word Scramble 把字弄反
/// Part 3: 把字串用來斷字 stringstream
/// Part 4: 反過來，要用到 algorithm 演算法

#include <iostream>
#include <sstream>   /// Part 3: 把字串用來斷字
#include <string>
#include <algorithm> /// Part 4: 反過來，要用到 algorithm 演算法
using namespace std;

int main()
{
    string line;     /// Part 1: Input
    while (getline(cin, line)) { /// 輸入一行，一直輸入到 Ctrl+Z 結束
        stringstream ss(line);   /// Part 3: 把字串用來斷字
        string word;             /// 用來斷字
        while (ss >> word) {     /// Part 3: 把字串用來斷字
            reverse(word.begin(), word.end()); /// Part 4: 把字反過來
            cout << " " << word;
        }
        cout << endl;            /// 換行
        /// cout << line << endl; /// 先隨便印出來
    }
}
