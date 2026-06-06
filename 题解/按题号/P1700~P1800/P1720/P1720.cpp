#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	// 斐波那契数列通项公式（Binet公式）
	cout << fixed << setprecision(2)
	     << (double)((pow(((1 + sqrt(5)) / 2), n) - pow(((1 - sqrt(5)) / 2), n)) / sqrt(5));
	return 0;
}
