#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, x;
	int a[10] = {0}; // 统计0~9出现次数
	cin >> n >> x;
	int l;
	for(int i = 1; i <= n; i++){
		int t = i;
		// 计算i的位数
		for(l = 1; t != 0; l++){
			t = t / 10;
		}
		l = l - 1;
		t = i;
		int s;
		// 逐位拆分统计
		for(int j = 1; j <= l; j++){
			s = t % 10;       // 取最后一位
			t = t / 10;       // 去掉最后一位
			a[s] = a[s] + 1;  // 计数+1
		}
	}
	cout << a[x]; // 输出x出现的次数
	return 0;
}
