#include <bits/stdc++.h>
using namespace std;
int main(){
	int k, s = 0, n = 0; // s=总金币, n=累计天数
	cin >> k;
	for(int i = 1; ; i++){        // i = 当前每天金币数
		for(int j = 1; j <= i; j++){ // 连续i天，每天i个金币
			s = s + i;
			n++;
			if(n == k){              // 达到第k天
				cout << s;
				return 0;
			}
		}
	}
	return 0;
}
