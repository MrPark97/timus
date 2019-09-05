#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int c=2, m=0;
	cin >> n;
	int *a = new int[n+1];
	int s = 0;
	for(int i=1; i<=3; i++) {
		cin >> a[i];
		s+=a[i];
	}
	m=s;
	for(int i=4; i<=n; i++) {
		cin >> a[i];
		s+=a[i];
		s-=a[i-3];
		if(s>m) {
			m = s;
			c = i-1;
		}
	}
	cout << m << ' ' << c << endl;
	return 0;
}
