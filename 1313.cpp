#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> tmp(n);
	vector<int> res(n*n);
	vector<vector<int> > v(n, tmp);
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cin >> v[i][j];
		}
	}
	int c=0;
	for(int k=0; k<n; k++) {
		int i=k, j=0;
		while(i>=0) {
			res[c] = v[i][j];
			i--;
			j++;
			c++;
		}
	}
	
	
	for(int k=1; k<n; k++) {
		int i=n-1, j=k;
		while(j<n) {
			res[c] = v[i][j];
			i--;
			j++;
			c++;
		}
	}
	for(int i=0; i<c; i++) {
		cout << res[i] << ' ';
	}
	
	return 0;
}
