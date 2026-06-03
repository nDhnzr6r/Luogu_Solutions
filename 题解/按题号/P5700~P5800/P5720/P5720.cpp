#include <bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin >> a;
	if(a == 1){            // 长度为1时直接输出第1天
		cout << "1";
		return 0;
	}
	for(int i = 2; ; i++){ // 从第2天开始
		a = floor(a / 2);    // 每天减半并向下取整
		if(a == 1){          // 长度变为1时输出天数
			cout << i;
			return 0;
		}
	}
	return 0;
}
