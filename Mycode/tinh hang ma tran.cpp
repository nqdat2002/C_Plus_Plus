#include <bits/stdc++.h>
using namespace std;
void swapmatrix(int arr[100][100], int a, int b, int rank) {
	for (int i = 0; i < rank; i++)
		swap(arr[a][i], arr[b][i]);
}
int Process(int arr[100][100], int m, int n) {
	int rank = n;
	for (int i = 0; i < rank; i++) {
		if (arr[i][i]) {
			for (int j = 0; j < m; j++){
				if (i != j) {
					double x = arr[j][i] * 1.0 / arr[i][i];
					for (int l = 0; l < rank; l++) {
						arr[j][l] -= x * arr[i][l];
					}
				}
			}
		}
		else {
			bool ok = true;
			for (int j = i + 1; j < m; j++) {
				if (arr[j][i]) {
					swapmatrix(arr, j, i, rank);
					ok = false;
					break;
				}
			}
			if (ok) {
				rank--;
				for (int j = 0; j < m; j++) {
					arr[j][i] = arr[j][rank];
				}
			}
			i--;
		}
	}
	return rank;
}
void Solve(){
	int m, n; cin >> m >> n;
	int arr[100][100];
	for (int i = 0; i < m; i++) 
		for (int j = 0; j < n; j++) 
			cin >> arr[i][j];
	cout << Process(arr, m, n) << endl;
}
int main() {
	int t; cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}
