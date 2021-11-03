#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		vector<int> arr(n);
		for(int i = 0 ; i < n ; i ++){
			cin >> arr[i];		
		}
		sort(arr.begin(), arr.end());
		cout << arr[k-1];
		cout << endl;	
	}
	return 0;
}
