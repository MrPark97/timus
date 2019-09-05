#include <bits/stdc++.h>
using namespace std;

map<string,int> m;

int main() {
	m["Alice"] = 1;
	m["Ariel"] = 1;
	m["Aurora"]  = 1;
	m["Phil"] = 1;
	m["Peter"] = 1;
	m["Olaf"] = 1;
	m["Phoebus"] = 1;
	m["Ralph"] = 1;
	m["Robin"] = 1;
	
	m["Bambi"] = 2;
	m["Belle"] = 2;
	m["Bolt"] = 2;
	m["Mulan"] = 2;
	m["Mowgli"] = 2;
	m["Mickey"] = 2;
	m["Silver"] = 2;
	m["Simba"] = 2;
	m["Stitch"] = 2;
	
	m["Dumbo"] = 3;
	m["Genie"] = 3;
	m["Jiminy"] = 3;
	m["Kuzko"] = 3;
	m["Kida"] = 3;
	m["Kenai"] = 3;
	m["Tarzan"] = 3;
	m["Tiana"] = 3;
	m["Winnie"] = 3;
	
	int n, c=0, p = 1;
	cin >> n;
	
	string s;
	cin >> s;
	c+= abs(p-m[s]);
	p = m[s];
	for(int i=1; i<n; i++) {
		cin >> s;
		c+= abs(m[s] - p);
		p = m[s];
	}
	cout << c;
	return 0;
}
