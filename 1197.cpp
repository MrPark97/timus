#include <bits/stdc++.h>
using namespace std;

int calculate(string s) {
	char x=s[0],y=s[1];
	int c = 0;
	if(x-2>='a' && y-1 >= '1') {
		c++;
	}
	if(x-1>='a' && y-2 >= '1') {
		c++;
	}
	if(x-2>='a' && y+1 <= '8') {
		c++;
	}
	if(x-1 >= 'a' && y+2<='8') {
		c++;
	}
	if(x+1<='h' && y-2 >='1') {
		c++;
	}
	if(x+2<='h' && y-1 >= '1') {
		c++;
	}
	if(x+1<='h' && y+2 <='8') {
		c++;
	}
	if(x+2<='h' && y+1 <= '8') {
		c++;
	}
	return c;
}

int main() {
	int n;
	string s;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> s;
		cout << calculate(s) << endl;
	}
	return 0;
}
