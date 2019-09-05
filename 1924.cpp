#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int c = n/2;
	if(n%2)
		c++;
	if(c%2)
		cout << "grimy";
	else
		cout << "black";
	return 0;
}
