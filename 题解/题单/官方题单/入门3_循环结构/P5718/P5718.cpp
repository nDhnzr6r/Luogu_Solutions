#include<bits/stdc++.h>
using namespace std;
int main(){
	int x, a[105] = {0};
	cin >> x;
	// 读入x个数
	for(int i = 0; i < x; i++){
		cin >> a[i];
	}
	int t = 999999; // 初始化为极大值
	// 遍历找最小值
	for(int i = 0; i < x; i++){
		if(a[i] < t){
			t = a[i];
		}
	}
	cout << t;
	return 0;
}
