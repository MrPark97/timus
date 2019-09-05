#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,c=2;
	string s;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> s;
		c++;
		if(s.size() > 4 && s.substr(s.size()-4) == "+one")
			c++;
	}
	if(c==13)
		c++;
	cout << c*100;
	return 0;
}
