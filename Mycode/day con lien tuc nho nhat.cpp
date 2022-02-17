#include <bits/stdc++.h>
using namespace std;
int Solve(vector<int> arr, int n, int x){
    int sum = 0, min_len = n + 1;
    int start = 0, end = 0;
    while (end < n) {
        while (sum <= x && end < n)
            sum += arr[end++];
        while (sum > x && start < n) {
            if (end - start < min_len)
                min_len = end - start;

            sum -= arr[start++];
        }
    }
    return min_len;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		vector<int> arr(n);
		for (int i = 0; i < n; i++)
			cin >> arr[i];
        if (Solve(arr, n, k) > n)
			cout << -1;
        else
        	cout << Solve(arr, n, k);
        cout << endl;
	}
	return 0;
}