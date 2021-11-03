#include <bits/stdc++.h>
#define present(t, x) (t.find(x) != t.end())
using namespace std;
void FileIO(){
	freopen("DATA.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
}
int main(){
	FileIO();
    int n, m, sz; cin >> n >> m;
	set<int> s;
	for(int i = 0; i < n; i ++){
		int tmp; 
		cin >> tmp;
		s.insert(tmp);
	}
	vector<int> res;
	for(int i = 0; i < m; i ++){
		sz = s.size();
		int tmp; cin >> tmp;
		s.insert(tmp);
		if(s.size() == sz) 
			res.push_back(tmp);
		s.erase(tmp);
	}
	sort(res.begin(), res.end());
	for(int i = 0; i < res.size(); i ++){
		cout << res[i] << " ";
	}
	return 0;
}