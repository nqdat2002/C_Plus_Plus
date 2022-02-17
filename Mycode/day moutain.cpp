#include<bits/stdc++.h>
using namespace std;
int Finding(vector<int> arr, int L, int R) {
	int a = 0;
	int x = 0;
	for (int i = L; i < R; i ++) {
		if (arr[i + 1] >= arr[i] && i)
			a ++;
		if (arr[i] > arr[x])
			x = i;
	}
	if (arr[x] < arr[R])
		x = R;
	if (a == R - L)
		return 1;
	int b = 0, c = 0;
	for (int i = L; i < R; i ++)
		if (arr[i + 1] >= arr[i])
			b++;
	for (int i = x; i < R; i ++)
		if (arr[i + 1] <= arr[i])
			c++;
	if (b == x - L && c == R - x)
		return 1;
	return 0;
}
int main() {
	int t; 
	cin >> t;
	while (t--) {
		int n; 
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		int L, R; 
		cin >> L >> R;
		if (Finding(arr, L, R))
			cout << "Yes";
		else 
			cout << "No";
		cout << endl;
	}
	return 0;
}

