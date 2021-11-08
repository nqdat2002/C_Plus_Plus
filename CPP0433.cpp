#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
bool Comparation(pair<int, int> a, pair<int, int> b){
	if(a.s > b.s) 
		return true;
	if(a.s == b.s && a.f < b.f) 
		return true;
	return false;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<pair<int, int> > a(n);
		int cnt[10005] = {0};
		for(int i = 0; i < n; i++){
			cin >> a[i].f;
			cnt[a[i].f] ++;
		}
		for(int i = 0; i < n; i ++)
			a[i].s = cnt[a[i].f];
		sort(a.begin(), a.end(), Comparation);
		for(int i = 0; i < n; i++){
			cout << a[i].f << " ";
		}
		cout << endl;
	}
	return 0;
}
		

