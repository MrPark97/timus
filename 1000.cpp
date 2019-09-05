#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<long long> a;
	long long t;
	while(cin>>t) {
		a.push_back(t);
	}
	for(int i=(a.size()-1); i>=0; i--) {
		cout << setprecision(13) << sqrt(a[i]) << endl;
	}
	return 0;
}
