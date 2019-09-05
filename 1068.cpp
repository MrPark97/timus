#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	if(n<1) {
		cout << (n+1)*(1-n+1)/2;
	} else {
		cout << (1+n)*n/2;
	}
	return 0;
}
