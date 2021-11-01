#include<bits/stdc++.h>
using namespace std; 
const long long mod = 1e9+7;
int main() { 
	int t; 
	cin >> t; 
	while (t--) { 
		long long n, x, res = 0; 
		cin >> n >> x; 
		vector<long long> arr(2005); 
		for (int i = 0 ; i < n ; i ++) { 
			cin >> arr[i]; 
		} 
		for (int i = 0 ; i < n ; i ++) { 
			long long tmp = 1; 
			
			for (int j = n - i - 1; j > 0; j --)
				tmp = (tmp * x) % mod; 

			res += arr[i] * tmp; 
			res = res % mod; 
		} 
		cout << res;
		cout << endl; 
	} 
	return 0; 
}
