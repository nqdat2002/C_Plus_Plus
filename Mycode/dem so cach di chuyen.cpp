#include <bits/stdc++.h>
using namespace std;
int Move(int arr[][25], int m, int n, int S){
	if (m < 0 || n < 0) 
		return 0;
	if (m == 0 && n == 0) 
		return (S == arr[m][n]);
	return Move(arr, m - 1, n, S - arr[m][n]) + Move(arr, m, n - 1, S - arr[m][n]);
}
int main() {
	int t; 
	cin >> t;
	while (t--) {
		int n, S; cin >> n >> S;
		int arr[25][25];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> arr[i][j];
		cout << Move(arr, n - 1, n - 1, S) << endl;
	}
	return 0;
}
