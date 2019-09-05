#include <bits/stdc++.h>
using namespace std;

int main() {
	long long d[46][3];
	d[0][0] = 0;
	d[0][1] = 0;
	d[0][2] = 0;
	d[1][0] = 1;
	d[1][1] = 0;
	d[1][2] = 1;
	
	for(int i=2; i<=45; i++) {
		d[i][0] = d[i-1][2] + d[i-1][1]/2;
		d[i][1] = d[i-1][0] + d[i-1][2];
		d[i][2] = d[i-1][0] + d[i-1][1]/2;
	}
	
	int n;
	cin >> n;
	cout << d[n][0] + d[n][2];
	
	return 0;
}
