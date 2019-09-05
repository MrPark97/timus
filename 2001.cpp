#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[3],b[3];
	for(int i=0; i<3; i++) {
		cin >> a[i] >> b[i];
	}
	cout << a[0] - a[2] << ' ' << b[0] - b[1] << endl;
	return 0;
}
