#include <bits/stdc++.h>
using namespace std;
bool tn(string str) {
	int n = str.size();
	if (n == 1)
		return false;
	for (int i = 0; i < n; i++)
		if (str[i] != str[n - i - 1])
			return false;
	return true;
}
bool cmp(pair<string, int> a, pair<string, int> b){
	if(a.first.length() > b.first.length())
		return true;
	if(a.first.length() == b.first.length() && a.first > b.first)
		return true;
	return false;
}
int main(){
	vector<pair<string, int> > pr;
	string s;
	while(cin >> s){
		pair<string, int> x;
		x = make_pair(s, 0);
		pr.push_back(x);
	}
	int n = pr.size();
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < n; j ++)
			if(pr[i].first == pr[j].first)
				pr[i].second ++; 
	}
	sort(pr.begin(), pr.end(), cmp);
	for (int i = 0; i < n; i ++) {
		int x = 0;
		for (int j = 0; j < i; j++)
			if (pr[i].first == pr[j].first)
				x++;
		if (x > 0)
			continue;
		if (tn(pr[i].first))
			cout << pr[i].first << " " << pr[i].second << endl;
	}
	return 0;
}
