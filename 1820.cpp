#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k,t;
	cin >> n >> k;
	
	if(n<k) {
		cout << 2;
	} else {
		t = (n*2)/k;
		if(n*2%k)
			t++;
		cout << t;
	}
	
	return 0;
}
