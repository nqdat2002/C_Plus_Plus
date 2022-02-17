#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> arr(n);
		int max1 = 0;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			if (arr[i] > max1) 
				max1 = arr[i];
		}
		vector<int> arr2(max1 + 1);
		for (int i = 0; i <= max1; i ++)
			arr2[i] = 0;
		for (int i = 0; i < n; i++) 
			arr2[arr[i]] ++;
		
		for (int i = 0; i < n; i++) {
			if (arr[i] == max1)
				cout << "_ ";
			else{
				for (int j = arr[i] + 1; j <= max1; j++) {
					if (arr2[j] > 0) {
						cout << j << " ";
						break;
					}
				}
			}
		}
		cout << endl;
	}
	return 0;
}
