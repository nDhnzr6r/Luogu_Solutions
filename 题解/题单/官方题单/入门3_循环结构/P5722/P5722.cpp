#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, x = 0; // x 用于累加求和
	cin >> n;
	for(int i = 1; i <= n; i++){
		x = x + i;     // 逐项累加
	}
	cout << x;
	return 0;
}
