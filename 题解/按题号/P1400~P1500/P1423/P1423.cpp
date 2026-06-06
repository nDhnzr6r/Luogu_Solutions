#include <bits/stdc++.h>
using namespace std;
int main(){
	double s, v = 2;    // v=当前步的游泳距离
	cin >> s;
	int bs = 0;          // 步数计数
	double x = 0;        // 已游总距离
	while(x < s){        // 未达到目标距离则继续
		bs++;
		x = x + v;
		v = 0.98 * v;     // 每步后距离衰减为98%
	}
	cout << bs;
	return 0;
}
