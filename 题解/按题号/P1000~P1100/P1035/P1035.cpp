#include <bits/stdc++.h>
using namespace std;
int main(){
	int k, n = 1;
	double s = 0;
	cin >> k;
	for(; s <= k; ){     // 当和<=k时继续累加
		s = s + (1.0 / n);  // 注意用1.0做浮点除法
		n++;
	}
	cout << n - 1;       // n多加了1，回退
	return 0;
}
