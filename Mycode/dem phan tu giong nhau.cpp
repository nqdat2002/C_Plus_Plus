#include <bits/stdc++.h>
using namespace std; 
int main(){ 
	int t; cin >> t; 
	while (t --) { 
		int n; cin >> n; 
		int arr[n][n]; 
		multiset <int> ms; 
		for(int i = 0; i < n; i ++){ 
			set<int>s;
			for(int j = 0; j < n; j ++){ 
				cin >> arr[i][j]; 
				s.insert(arr[i][j]);
			} 
			for(int x : s) ms.insert(x);	
		} 
		vector<int>u; 
		for(int x : ms) u.push_back(x); 
		int res = 0; 
		for(int i = 0 ; i < u.size(); i ++){ 
			int cnt = 1; 
			while(u[i] == u[i + 1]){
				cnt ++; 
				i++;
			}
			if(cnt == n) 
				res++; 
		} 
		cout << res << endl;
	}
	return 0;
}
