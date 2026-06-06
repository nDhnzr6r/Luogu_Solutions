#include <bits/stdc++.h>
using namespace std;
int main(){
	int a, b, x = 0;
	string s, ss;
	cin >> a >> b;
	for(int k = 1; k < 9999; k++){
		s = to_string(k);
		ss = s;
		reverse(ss.begin(), ss.end());
		ss.erase(0, 1);        // 去掉反转后的首位，构造奇长度回文
		s = s + ss;            // 拼接得到回文数
		x = stoi(s);
		if(x >= a && x <= b){
			// 跳过2和3的倍数
			if(x % 2 == 0 || x % 3 == 0){
				continue;
			}
			int t = 0;
			// 6k±1 质数判断
			for(int j = 5; 1LL * j * j <= x; j += 6){
				if(x % j == 0){
					t = 1;
					break;
				}
				else if(x % (j + 2) == 0){
					t = 1;
					break;
				}
			}
			if(t == 0){
				cout << x << endl;
				// 11是唯一的偶长度回文质数，单独处理
				if(a <= 11 && 11 <= b && x == 7){
					cout << "11" << endl;
				}
			}
		}
		else if(x < a || x > b){
			continue;
		}
	}
	return 0;
}
