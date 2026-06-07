#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[15] = {0}, m = 0, c = 0; // m: 手中余额, c: 存的钱
    for (int i = 1; i <= 12; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= 12; i++) {
        m += 300; // 月初领零花钱
        if (m - a[i] < 0) { // 不够花，输出负月份
            cout << "-" << i;
            return 0;
        }
        // 尽可能存整百
        while (m - a[i] >= 100) {
            m -= 100;
            c += 100;
        }
        m -= a[i]; // 扣除本月花销
    }
    // 年末结算：手中的钱 + 存的钱 + 20% 利息
    m = m + c + c / 5;
    cout << m;
    return 0;
}
