#include <bits/stdc++.h>
using namespace std;
void change(int arr[][100], int m, int n){
	int a = m, b = n;
	int tmp[10005];
	int k = 0;
	for (int i = 0; i <= a / 2 + 1; i ++) {
		for (int j = i; j < n; j ++)
			tmp[k ++] = arr[i][j];		
		for (int j = i + 1; j < m; j ++)
			tmp[k ++] = arr[j][n - 1];
				
		for (int j = n - 2; j >= i; j --)
			tmp[k ++] = arr[m - 1][j];
				
		for (int j = m - 2; j > i; j --)
			tmp[k ++] = arr[j][i];
		m--; n--;
	}
	int u = 0;
	m = a, n = b;
	int  x = a, y = b;
	for (int i = 0; i < a / 2; i ++) {
		int c[10005];
		c[0] = tmp[x * 4 - 5 + u];
		for (int l = 1; l < x * 4 - 4; l ++) 
			c[l] = tmp[u ++];
		int z = 0;
		for (int j = i; j < n; j ++)
			arr[i][j] = c[z ++];
		for (int j = i + 1; j < m; j ++)
			arr[j][n - 1] = c[z ++];	
		for (int j = n - 2; j >= i; j --)
			arr[m - 1][j] = c[z ++];		
		for (int j = m - 2; j > i; j --)
			arr[j][i] = c[z ++];	
		m --; n --;
		x -= 2; y -= 2;
		u ++;
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		int m, n; cin >> m >> n;
		int a = m, b = n;
		int arr[100][100];
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				cin >> arr[i][j];
		change(arr, m, n);
		for (int i = 0; i < a; i ++) 
			for (int j = 0; j < b; j ++)
				cout << arr[i][j] << " ";
		cout << endl;
	}
	return 0;
}

