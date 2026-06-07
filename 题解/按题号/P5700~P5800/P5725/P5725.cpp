#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, a = 1;
    cin >> x;
    // 打印正方形矩阵
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            if (a <= 9) {
                cout << "0" << a; // 不足两位补零
            } else {
                cout << a;
            }
            a++;
        }
        cout << endl;
    }
    cout << endl; // 中间空行
    a = 1;
    // 打印右对齐三角形
    for (int i = 0; i < x; i++) {
        // 打印前导空格（右对齐）
        for (int j = 0; j < x - i - 1; j++) {
            cout << "  ";
        }
        // 打印数字
        for (int j = 0; j < i + 1; j++) {
            if (a <= 9) {
                cout << "0" << a;
            } else {
                cout << a;
            }
            a++;
        }
        cout << endl;
    }
    return 0;
}
