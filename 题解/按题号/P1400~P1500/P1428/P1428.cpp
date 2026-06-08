#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a[110] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        int x = 0;
        // 统计左边比当前鱼可爱的数量
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i]) {
                x++;
            }
        }
        cout << x << " ";
    }
    return 0;
}
