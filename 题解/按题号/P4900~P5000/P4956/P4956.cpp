#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    // 每行：7X + 21K，52周总计：364X + 1092K = N
    // 要求 X 最大，故从 100 向下枚举；K 最小，故从 1 向上枚举
    for (int x = 100; x >= 1; x--) {
        for (int k = 1; k <= ceil(n / 1092.0); k++) {
            if (1092 * k + 364 * x == n) {
                cout << x << endl << k;
                return 0;
            }
        }
    }
    return 0;
}
