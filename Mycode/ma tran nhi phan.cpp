#include<bits/stdc++.h>
using namespace std;
void Solve(){
	int n; cin >> n;
	int arr[1000][10];
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < 3; j++) 
			cin >> arr[i][j];
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int sum_1 = 0, sum_0 = 0;
		for (int j = 0; j < 3; j++) {	
			if (arr[i][j] == 1)
				sum_1 ++;
			else sum_0 ++;
		}
		if (sum_1 > sum_0)
			cnt++;
	}
	cout << cnt << endl;
}
int main() {	
	Solve();
	return 0;
}

