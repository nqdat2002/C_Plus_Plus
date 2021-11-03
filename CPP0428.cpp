#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		vector<int> res(m+n);
		for(int i=0;i<m+n;i++)
		{
			cin >> res[i];
		}
		sort(res.begin(), res.end());
		for(int i=0; i<m+n; i++){
			cout << res[i] << " ";
		}
		cout << endl;
	}
	return 0;		
}
