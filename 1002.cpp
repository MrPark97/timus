#include <bits/stdc++.h>
using namespace std;

const int INF = 1000000000;

char charToN(char ch) {
	switch(ch) {
		case 'a':
			return '2';
		case 'b':
			return '2';
		case 'c':
			return '2';
		case 'd':
			return '3';
		case 'e':
			return '3';
		case 'f':
			return '3';
		case 'g':
			return '4';
		case 'h':
			return '4';
		case 'i':
			return '1';
		case 'j':
			return '1';
		case 'k':
			return '5';
		case 'l':
			return '5';
		case 'm':
			return '6';
		case 'n':
			return '6';
		case 'o':
			return '0';
		case 'p':
			return '7';
		case 'q':
			return '0';
		case 'r':
			return '7';
		case 's':
			return '7';
		case 't':
			return '8';
		case 'u':
			return '8';
		case 'v':
			return '8';
		case 'w':
			return '9';
		case 'x':
			return '9';
		case 'y':
			return '9';
		case 'z':
			return '0';
	}
}

int main()
{
	
	string num;
	while(cin >> num) {
		if(num == "-1")
			return 0;
		int n, N = num.size();
		cin >> n;
		vector<string> l(n), t(n);
		vector<int> tmp(N+1, -1);
		vector<vector<int> > m(N+1, tmp);
		for(int i=0; i <n; i++) {
			cin >> l[i];
			t[i] = l[i];
			for(int j=0; j<t[i].size(); j++) {
				t[i][j] = charToN(t[i][j]);
			}
		}
		for(int i=0; i<n; i++) {
			int wl = t[i].size();
			int b = N-wl+1;
			for(int j=0; j<b; j++) {
				if(num.substr(j, wl) == t[i]) {
					m[j][j+wl] = i;
				}
			}
		}
		
		vector<int> d(N+1, INF);
		vector<pair<int, int> > p(N+1, make_pair(-1,-1));
		vector<char> used(N+1, 0);
		queue<int> q;
		q.push(0);
		d[0] = 0;
		while(!q.empty()) {
			int v = q.front();
			q.pop();
			for(int i=0; i<=N; i++) {
				if(m[v][i] != -1) {
					int to = i;
					if(!used[to]) {
						q.push(to);
						used[to] = 1;
						p[to] = make_pair(v, m[v][i]);
						d[to] = d[v] + 1; 
					}
				}
			}
		}
		vector<string> path;
		if(!used[N]) {
			cout << "No solution." << endl;
		} else {
			for(int v=N; v!=0; v=p[v].first) {
				path.push_back(l[p[v].second]);
			}
			reverse(path.begin(), path.end());
			
			for(int i=0; i<path.size(); i++) {
				cout << path[i] << ' ';
			}
			cout << endl;
		}
		
	}
	
	return 0;
}
