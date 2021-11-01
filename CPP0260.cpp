#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; 
	cin >> n;
	int a[405], arr[22][22];
	for (int i = 0 ; i < n * n ; i ++) {
		cin >> a[i];
	}
	sort(a, a + n * n);
	int tmp = n, k = 0;
	for (int i = 1 ; i <= n / 2 + 1 ; i ++) {
		
		for (int j = i ; j <= tmp ; j++)
			arr[i][j] = a[k++];
			
		for (int j = i + 1 ; j <= tmp ; j ++)
			arr[j][tmp] = a[k++];
			
		for (int j = tmp - 1 ; j >= i ; j --)
			arr[tmp][j] = a[k++];
			
		for (int j = tmp - 1 ; j > i ; j --)
			arr[j][i] = a[k++];
			
		tmp --;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
	return 0;
}
