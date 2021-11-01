#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, m;
ll a[501][501];
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		for(int i = 1; i <= n; i ++)
			for(int j = 1; j <= m; j ++) 
				cin >> a[i][j];
		ll ker[4][4];
		for(int i = 1; i <= 3; i++)
			for(int j = 1; j <= 3; j++) 
				cin >> ker[i][j];
		ll res = 0;
		for(int i = 1 ; i <= n - 2; i ++)
			for(int j = 1; j <= m - 2; j ++)
				for(int h = 0; h < 3; h ++)
					for(int k = 0; k < 3; k ++)
						res += a[i + h][j + k] * ker[h + 1][k + 1];
					
		cout << res << endl;
	}
	return 0;
}