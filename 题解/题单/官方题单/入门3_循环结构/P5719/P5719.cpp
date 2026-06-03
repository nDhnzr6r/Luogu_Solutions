#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, k;
	int ai = 0, bi = 0; // A类、B类的个数
	int a = 0, b = 0;    // A类、B类的总和
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		if(i % k == 0){   // 能被k整除 → A类
			ai++;
			a += i;
		}
		else{              // 不能被k整除 → B类
			bi++;
			b += i;
		}
	}
	// 保留1位小数输出平均值
	cout << fixed << setprecision(1) << (double)a / ai << " ";
	cout << fixed << setprecision(1) << (double)b / bi;
	return 0;
}
