#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; 
	cin >> t;
	while (t--) {	
		int n; 
		cin >> n;
		vector<int> arr(10005);
		int max = 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i]; 
			if (max < arr[i])
				max = arr[i];
		}
		vector<int> res(max + 1);
		for (int i = 0; i <= max; i++) 
			res[i] = 0;
		for (int i = 0; i < n; i++)
			res[arr[i]] ++;
		int cnt = 0;
		for (int i = 0; i <= max; i++) {
			if (res[i] > 1)
				cnt += res[i];
		}
		cout << cnt << endl;
	}
	return 0;
}