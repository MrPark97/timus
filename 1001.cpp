#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;




string generate(string s) {
	string ans="";
	for(int i=0; i<s.size(); i++) {
		if(s[i] == 'o' || s[i] == 'q' || s[i] == 'z') {
			ans+='0';
		} else if(s[i] == 'i' || s[i] == 'j') {
			ans+='1';
		} else if(s[i] == 'a' || s[i] == 'b' || s[i] == 'c') {
			ans+='2';
		} else if(s[i] == 'd' || s[i] == 'e' || s[i] == 'f') {
			ans+='3';
		} else if(s[i] == 'g' || s[i] == 'h') {
			ans+='4';
		} else if(s[i] == 'k' || s[i] == 'l') {
			ans+='5';
		} else if(s[i] == 'm' || s[i] == 'n') {
			ans+='6';
		} else if(s[i] == 'p' || s[i] == 'r' || s[i] == 's') {
			ans+='7';
		} else if(s[i] == 't' || s[i] == 'u' || s[i] == 'v') {
			ans+='8';
		} else if(s[i] == 'w' || s[i] == 'x' || s[i] == 'y') {
			ans+='9';
		}
	}
	return ans;
}

int main() {
	string num;
	cin >> num;
	while(num != "-1") {
		map<string,string> m;
		map<int, vector<string> > ids;
		vector<string> d;
		int n;
		
		cin >> n;
		string s;
		for(int i=0; i<n; i++) {
			cin >> s;
			string t = generate(s);
			if(m[t] == "")
				d.push_back(t);
			m[t] = s;
		}
		for(int i=0; i<d.size(); i++) {
			// Get the first occurrence
			size_t pos = num.find(d[i]);

			// Repeat till end is reached
			while(pos != string::npos)
			{
				ids[pos].push_back(d[i]);
				// Get the next occurrence from the current position
				pos = num.find(d[i], pos + d[i].size());
			}
		}
		vector<string> ror;
		vector<pair<int, string> > ans(num.size()+1, make_pair(INF, ""));
		ans[0].first = 0;
		for(int i=0; i<num.size(); i++) {
			for(int j=0; j<ids[i].size(); j++) {
				string cur = ids[i][j];
				if(ans[i+cur.size()].first > (ans[i].first+1)) {
					ans[i+cur.size()] = make_pair(ans[i].first+1, cur);
				}
			}
		}
		
		
		if(ans[num.size()].first < INF) {
			int cur = num.size();
			while(cur > 0) {
				ror.push_back(ans[cur].second);
				cur -= ans[cur].second.size();
			}
			for(int i=(ror.size()-1); i>=0; i--) {
				cout << m[ror[i]] << ' ';
			}
			cout << endl;
		} else {
			cout << "No solution." << endl;
		}
		
		cin >> num;
		m.clear();
		ids.clear();
		d.clear();
		ror.clear();
		ans.clear();
	}
	return 0;
}
