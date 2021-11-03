#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> arr(n);
		for(int i = 0; i < n; i ++) 
			cin >> arr[i];
		vector<int> f(n, INT_MAX);
		f[0] = 0;
		for(int i = 1; i < n;  i++){
			for(int j = 0; j < i; j ++){
				if(j + arr[j] >= i)
				f[i]= min(f[i], f[j] + 1);
			}
		}
		cout << f[n - 1] << endl;
	}
	return 0;
}
