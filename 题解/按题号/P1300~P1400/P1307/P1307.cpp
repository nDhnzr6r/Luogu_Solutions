#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string s, ss;
	cin >> n;
	if(n > 0){
		if(n % 10 != 0){         // 末尾无0，直接反转
			s = to_string(n);
			ss = s;
			reverse(ss.begin(), ss.end());
			cout << ss;
		}
		else{
			while(n % 10 == 0){    // 去掉末尾的0
				n = n / 10;
			}
			s = to_string(n);
			ss = s;
			reverse(ss.begin(), ss.end());
			cout << ss;
		}
	}
	else if(n < 0){
		if(n % 10 != 0){
			s = to_string(n);
			ss = s;
			reverse(ss.begin(), ss.end());
			int t = ss.length();
			ss.erase(t - 1);       // 去掉反转后末尾的负号
			cout << "-" << ss;
		}
		else{
			while(n % 10 == 0){
				n = n / 10;
			}
			s = to_string(n);
			ss = s;
			reverse(ss.begin(), ss.end());
			int t = ss.length();
			ss.erase(t - 1);
			cout << "-" << ss;
		}
	}
	else{                        // n == 0
		cout << "0";
	}
	return 0;
}
