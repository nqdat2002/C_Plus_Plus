#include <bits/stdc++.h> 
// Binary
using namespace std; 
int main() { 
	int t; 
	cin >> t; 
	while(t--) { 
		int n; 
		cin >> n; 
		int arr[n]; 
		for (int i = 0; i < n; i ++) 
			cin >> arr[i]; 
		int cnt = 0; 
		int left = 0, right = n - 1; 
		while(left <= right) { 
			if (arr[left] == arr[right]) { 
				left ++;
			 	right --; 
			} 
			else if (arr[left] < arr[right]) {
				left ++; 
				arr[left] += arr[left - 1]; 
				cnt ++; 
			} 
			else { 
				right --; 
				arr[right] += arr[right + 1]; 
				cnt ++; 
			} 
		} 
		cout << cnt << endl; 
	} 
	return 0;
}
