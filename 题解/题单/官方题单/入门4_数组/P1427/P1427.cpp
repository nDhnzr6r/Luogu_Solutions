#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a[110] = {0};
    int i = 0;
    // 读入数字直到遇到 0
    for (; true; i++) {
        cin >> a[i];
        if (a[i] == 0) {
            break;
        }
    }
    // 倒序输出（跳过末尾的 0）
    for (int j = i - 1; j >= 0; j--) {
        cout << a[j] << " ";
    }
    return 0;
}
