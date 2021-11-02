#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
    	int n, m, l; cin >> n >> m >> l;
        int a[n][m];
        for(int i = 0; i < n; i ++)
        	for(int j = 0;j < m; j ++) cin >> a[i][j];
		
		int p = n - l + 1, q = m - l + 1;
		int c[p][q];
		memset(c, 0, sizeof(c));
		for(int i = 0; i <= n - l; i ++)
			for(int k = 0; k < l; k ++)
				for(int g = 0 ; g < l; g ++) c[i][0] += a[i + k][g];

		for(int j = 1; j <= m - l; j ++){
			for(int i = 0; i <= n - l; i ++){
				int t1 = 0;
				for(int k = 0; k < l; k ++)
					t1 += a[i + k][j - 1];
				
				int t2 = 0;
				for(int k = 0; k < l; k ++)
					t2 += a[i + k][j - 1 + l];
				
				c[i][j] = c[i][j - 1];
				c[i][j] -= t1;
				c[i][j] += t2;
			}
		}
		for(int i = 0; i < p; i ++)
			for(int j = 0; j < q; j ++) c[i][j] /= (l * l);
		
		for(int i = 0; i < p; i ++){
			for(int j = 0; j < q; j ++) 
				cout << c[i][j] << " ";
			cout << endl;
		}
	}
	return 0;
}
