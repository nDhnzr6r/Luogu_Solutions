#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, mi = 10000, ma = -1; // 预设极值：min极大，max极小
	cin >> n;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		mi = min(mi, x);          // 维护最小值
		ma = max(ma, x);          // 维护最大值
	}
	cout << ma - mi;              // 极差 = 最大值 - 最小值
	return 0;
}
