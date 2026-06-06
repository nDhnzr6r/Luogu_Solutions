#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, a, t = -1;       // t=上一个数，-1表示第一个数
	int s[10000] = {0};     // 各段连号长度
	int ss = 0, tt = 0;     // ss=当前段号，tt=最长长度
	cin >> n;
	for(int i = 0; i < n; i++){
		if(i != 0){
			t = a;            // 保存上一个数
		}
		cin >> a;
		if(a == t + 1 || t == -1){ // 连续则当前段+1
			s[ss] = s[ss] + 1;
		}
		else{                      // 断开则开新段
			ss++;
			s[ss] = s[ss] + 1;
		}
	}
	for(int i = 0; i <= ss; i++){
		tt = max(s[i], tt);        // 取最长段
	}
	cout << tt;
	return 0;
}
