#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a[10000] = {0};
    cin >> n;
    a[0] = n;
    // n 为 1 时直接输出
    if (n == 1) {
        cout << "1";
        return 0;
    }
    int i = 1;
    // 模拟冰雹猜想过程，存入数组
    for (;; i++) {
        if (a[i - 1] % 2 == 0) {
            a[i] = a[i - 1] / 2;
        } else {
            a[i] = a[i - 1] * 3 + 1;
        }
        if (a[i] == 1) {
            break;
        }
    }
    // 倒序输出
    for (int j = i; j >= 0; j--) {
        cout << a[j] << " ";
    }
    return 0;
}
