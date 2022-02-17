#include <iostream>
using namespace std;
int arr[1000];
void change(int a[][100], int n, int m){
	int k = 0;
	int row = n, col = m;
	for (int i = 0 ; i <= row / 2 ; i ++) {
		for (int j = i ; j < m ; j ++)
			arr[k ++] = a[i][j];
		for (int j = i + 1 ; j < n; j ++)
			arr[k ++] = a[j][m - 1];
		for (int j = m - 2 ; j >= i; j --)
			arr[k ++] = a[n - 1][j];
		for (int j = n - 2 ; j > i; j --)
			arr[k ++] = a[j][i];
		n --; 
		m --;
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) { 
		int n, m;
		cin >> n >> m;
		int row = n, col = m;
		int a[100][100];
		for (int i = 0 ; i < n ; i ++) {
			for (int j = 0 ; j < m ; j ++)
				cin >> a[i][j];
		}
		change(a, n ,m);
		for (int i = row * col - 1 ; i >= 0 ; i --)
			cout << arr[i] << " ";
		cout << endl;
	}
	return 0;
}
