#include<bits/stdc++.h>
#define int long long int
using namespace std;

int multiply(int a, int b, int c) {
	int res = 0;
	while (b) {
		if (b & 1) res = res + a, res %= c;
		a += a; a %= c;
		b /= 2;
	}
	return res;
}

int32_t main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	cout << multiply(20, 20, 1e9 + 7);


	return 0;
}
