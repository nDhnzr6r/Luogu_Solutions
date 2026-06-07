#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a[1005] = {0}, mi = 100, mx = -1, mix, mxx;
    cin >> n;
    // 读入分数，同时记录最低分和最高分的位置
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < mi) {
            mi = a[i];
            mix = i;
        }
        if (a[i] > mx) {
            mx = a[i];
            mxx = i;
        }
    }
    int x = 0;
    // 求和时跳过最低分和最高分所在位置
    for (int i = 0; i < n; i++) {
        if (i == mix || i == mxx) {
            continue;
        }
        x = x + a[i];
    }
    // 输出平均值，保留两位小数
    cout << fixed << setprecision(2) << (double)x / (n - 2);
    return 0;
}
