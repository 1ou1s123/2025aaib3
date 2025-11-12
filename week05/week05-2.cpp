/// week05-2.cpp 擴展 stringstream
#include <iostream>  /// 為了 cin cout
#include <string>    /// 為了字串 string
#include <sstream>   /// (新)的 string變成stream

using namespace std;  /// 為了不寫 std::cin
int main()
{
    string line;  /// 準備放「一整串」的字串
    getline(cin, line);  /// 一次讀入一整串
    cout << line << endl;  /// 印出來，加跳行

    stringstream ss(line);  /// (新)的把string變成stream
    string word;
    while (ss >> word){
        cout << "s裡面到1個字： " << word << endl;
    }
}
