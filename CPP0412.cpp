#include <bits/stdc++.h> 
#include <algorithm>
using namespace std; 
int main() { 
	int t; 
	cin >> t; 
	while(t--) { 
		long long n; 
		cin >> n; 
		long long arr[n+2]; 
		for(int i=0;i<n;i++) 
			cin >> arr[i]; 
		sort(arr,arr+n);
		for(int i=0;i<n;i++) 
			cout << arr[i] << " "; 
		cout << endl;
	} 
	return 0;
}
