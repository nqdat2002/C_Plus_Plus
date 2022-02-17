#include <bits/stdc++.h>
using namespace std;
int Solve(vector<int> arr, int n) {
	vector<int> fre(n, 1); 
	vector<int>  fre2(n, 1);
	// tim xuoi
	for (int i = 1; i < n; i++) 
		for (int j = 0; j < i; j++) 
			if (arr[i] > arr[j])
				fre[i] = max(fre[i], fre[j] + 1);
	// tim nguoc			
	for (int i = n-2; i >=0; i--) 
		for (int j = n-1; j > i; j--) 
			if (arr[i] > arr[j])
				fre2[i] = max(fre2[i], fre2[j] + 1);
	// solve			
	int res = 0;
	for (int i = 0; i < n; i++) {
		if (fre[i] + fre2[i] - 1 >  res)
			res = fre[i] + fre2[i] - 1;
	}
	return res;
}
int main() {
	int t; 
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> arr(n);
		for(int i = 0; i < n; i ++){
			cin >> arr[i];
		}
		cout << Solve(arr, n) << endl;
	}
	return 0;
}