#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, x = 1; // x为当前输出的数字
	cin >> n;
	for(int i = 0; i < n; i++){       // 控制行数
		for(int j = i; j < n; j++){     // 每行输出 n-i 个数
			if(x / 10 == 0){              // 补前导0
				cout << "0" << x;
			}
			else{
				cout << x;
			}
			x++;
		}
		cout << endl;
	}
	return 0;
}
