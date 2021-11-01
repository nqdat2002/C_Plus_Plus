#include <bits/stdc++.h> 
#include <algorithm>
#include <vector>
using namespace std; 
int main() { 
	int t; 
	cin >> t; 
	while(t--) { 
		long long n; 
		cin >> n; 
		vector<int> arr(n);
		for(int i=0;i<n;i++) 
			cin >> arr[i]; 
		sort(arr.begin(),arr.end()); 
		cout << arr[n-1]; 
		cout << endl;
	} 
	return 0;
}
