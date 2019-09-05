#include <bits/stdc++.h>
using namespace std;

map<int,int> m;

int main() {
	long long d=1;
	for(long long i=1;i<=2147483647;i+=d,d++) {
		m[i] = 1;
	}
	
	int n,a;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> a;
		if(m[a]) {
			cout << 1 << ' ';
		} else {
			cout << 0 << ' ';
		}
	}
	return 0;
}
