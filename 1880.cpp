#include <bits/stdc++.h>
using namespace std;

map<int,int> m;

int main() {
	int n, k, c=0;
	for(int i=0; i<3; i++) {
		cin >> n;
		for(int j=0; j<n; j++) {	
			cin >> k;
			m[k]++;
			if(i==2 && m[k] == 3) {
				c++;
			}
		}
	}
	cout << c;
	return 0;
}
