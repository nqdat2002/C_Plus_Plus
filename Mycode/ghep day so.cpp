#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
	int t; 
	cin >> t; 
	while(t--){ 
		int n,k; 
		cin >> n >> k; 
		int arr[n][k],res[n*k]; 
		int index = 0; 
		for(int i = 0; i < k; i++){ 
			for(int j = 0 ; j < n; j++){ 
				cin >> arr[i][j]; 
				res[index++] = arr[i][j];
			}
		} 
		sort(res, res + n*k); 
		for(int i = 0; i < index ; i++){ 
			cout << res[i] << " "; 
		} 
		cout << endl; 
	} 
	return 0; 
}
