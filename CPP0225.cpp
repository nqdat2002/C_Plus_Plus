#include <bits/stdc++.h>
using namespace std;
int Sum_Matrix(int arr[][105], int n) {
	int a[50] = {0}, b[50] = {0};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i] += arr[i][j];
			b[j] += arr[i][j];
		}
	}
	int sum_max = 0;
	for (int i = 0; i < n; i++)
		if (a[i] > sum_max)
			sum_max = a[i];
	for (int i = 0; i < n; i++)
		if (b[i] > sum_max)
			sum_max = b[i];
	int res = 0;
	for (int i = 0, j = 0; i < n && j < n;) {
		int tmp = max(sum_max - a[i], sum_max - b[j]);
		a[i] += tmp;
		b[j] += tmp;
		res += tmp;
		if (a[i] == sum_max)
			i ++;
		if (b[j] == sum_max)
			j ++;
	}
	return res;
}
int main() {
	int t; 
	cin >> t;
	while (t--) {
		int n; 
		cin >> n;
		int arr[105][105];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> arr[i][j];
		cout << Sum_Matrix(arr, n);
		cout << endl;
	}
	return 0;
}
