#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m,arr[100][100],brr[100][100];
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	cin >> m;
	for (int i = 0; i < m; i ++)
		for (int j = 0; j < m; j ++)
			cin >> brr[i][j];

	for (int i = 0; i < n; i += m) {
		for (int j = 0; j < n; j += m) {
			for (int x = 0; x < m ; x++) {
				for (int y = 0; y < m; y++) {
					arr[i+x][j+y] *= brr[x][y];
				}
			}
		}
	}
	for (int i = 0; i < n; i ++){
		for (int j = 0; j < n; j ++)
			cout << arr[i][j] << " ";
					
		cout << endl;
	}
	return 0;
}

