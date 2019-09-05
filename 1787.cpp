#include <bits/stdc++.h>
using namespace std;

int main() {
	int k,n,a,s=0;
	cin >> k >> n;
	for(int i=0; i<n; i++) {
		cin >> a;
		s+=a;
		s-=k;
		if(s<0)
			s=0;
	}
	cout << s << endl;
	return 0;
}
