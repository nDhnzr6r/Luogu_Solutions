#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, b;
    cin >> n;
    // 枚举较小的质因数 i，从 2 到 sqrt(n)
    for (int i = 2; 1LL * i * i <= n; i++) {
        // 快速排除 2、3 以外的合数（跳过 2、3 的倍数）
        if ((i % 2 == 0 || i % 3 == 0) && (i != 2 && i != 3)) {
            continue;
        }
        int x = 0;
        // 6k±1 质数检测法：跳过以 6 为周期的非质数
        for (int j = 5; 1LL * j * j <= i; j += 6) {
            if (i % j == 0) {
                x = 1;
                break;
            } else if (i % (j + 2) == 0) {
                x = 1;
                break;
            }
        }
        // i 是质数且整除 n，且商不为 1
        if (x == 0) {
            if (n % i == 0 && n / i != 1) {
                b = n / i;
                // 特判：商为 2 或 3 直接输出
                if (b == 2 || b == 3) {
                    cout << max(i, b);
                    return 0;
                }
                // 快速排除商为合数的情况
                if (b % 2 == 0 || b % 3 == 0) {
                    continue;
                }
                int x = 0;
                // 对商 b 也做 6k±1 质数检测
                for (int j = 5; 1LL * j * j <= b; j += 6) {
                    if (b % j == 0) {
                        x = 1;
                        break;
                    } else if (b % (j + 2) == 0) {
                        x = 1;
                        break;
                    }
                }
                // 两个都是质数，输出较大者
                if (x == 0) {
                    cout << max(i, b);
                    return 0;
                }
            }
        }
    }
    return 0;
}
