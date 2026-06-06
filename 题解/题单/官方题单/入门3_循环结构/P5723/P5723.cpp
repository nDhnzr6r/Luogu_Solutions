#include <bits/stdc++.h>
using namespace std;
int main(){
	int L, l = 0;          // l=当前质数和
	int a[10000] = {0};    // 存放已选质数
	int as = 0;            // 质数个数
	cin >> L;
	for(int i = 2; ; i++){ // 从2开始枚举
		int x = 0;
		for(int j = 1; j <= i; j++){ // 判断i是否为质数
			if(i % j == 0){
				x = x + 1;
			}
		}
		if(x == 2){          // 只有2个因数 → 是质数
			l = l + i;
			a[as] = i;
			as += 1;
			if(l > L){         // 和超过L时回退
				as -= 1;
				for(int k = 0; k < as; k++){
					cout << a[k] << endl;
				}
				cout << as;
				return 0;
			}
		}
	}
	return 0;
}
