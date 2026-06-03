#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	int x = 0; // 累加和
	int j = 0; // 乘数 1~9
	// 遍历前12位，跳过位置1和5的分隔符'-'
	for(int i=0;i<11;i++){
		if(i != 1 && i != 5){
			j++;
			x += (s[i] - '0') * j;
		}
	}
	int t = x % 11; // 计算识别码
	char t2;
	if(t == 10){
		t2 = 'X'; // 余数10对应X
		if(t2 == s[12]){
			cout << "Right";
		}
		else{
			s.erase(12);       // 删掉错误识别码
			s += t2;           // 拼接正确识别码
			cout << s;
		}
	}
	else{
		if(t == (s[12] - '0')){
			cout << "Right";
		}
		else{
			s.erase(12);
			t2 = char(t + '0'); // 数字转字符
			s += t2;
			cout << s;
		}
	}
    return 0;
}