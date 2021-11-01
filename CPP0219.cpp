#include<bits/stdc++.h>
using namespace std;
int main() {
	int t, n, m, arr1[105][105], arr2[105][105];
	cin >> t;
	while (t--) {
		cin >> n >> m;
		int arr1[105][105],arr2[105][105];
		for (int i = 0; i < n; i ++){
			for (int j = 0; j < m; j ++) {
				cin >> arr1[i][j];
				arr2[i][j] = arr1[i][j];
			}
		}
		for (int i = 0; i < n; i ++) {
			for (int j = 0; j < m; j ++) {
				if (arr1[i][j] == 1) {
					for (int h = 0; k < n; k ++) {
						arr2[k][j] = 1;
					}
					for (int k = 0; k < m; k ++) {
						arr2[i][k] = 1;
					}
				}
			}
		}
		for (int i = 0; i < n; i ++) {
			for (int j = 0; j < m; j ++){
				cout << arr2[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
