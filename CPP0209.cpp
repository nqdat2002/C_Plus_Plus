#include<bits/stdc++.h>
using namespace std;

int SUM(vector<int> arr, int Left, int Right) {
	int sum = 0;
		for (int i = Left - 1; i < Right; i++ )
			sum += arr[i];
	return sum;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, Q; 
		cin >> n >> Q;
		vector<int> arr(n);
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		while(Q--){
			int Left, Right; 
			cin >> Left >> Right;
			cout << SUM(arr, Left, Right) ;
			cout << endl;
		}
	}
	return 0;
}
