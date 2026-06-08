#include <bits/stdc++.h>
using namespace std;
int main() {
    int l, m, z, y;
    cin >> l >> m;
    int a[l + 10] = {0}; // 0 表示有树，1 表示被移除
    for (int i = 0; i < m; i++) {
        cin >> z >> y;
        // 标记区间 [z, y] 内的树被移除
        for (int j = z; j <= y; j++) {
            a[j] = 1;
        }
    }
    int x = 0;
    // 统计剩余树木
    for (int i = 0; i <= l; i++) {
        if (a[i] == 0) {
            x++;
        }
    }
    cout << x;
    return 0;
}
