#include<bits/stdc++.h>
//vector or array
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int arr[10005],brr[10005];
		for(int i = 0 ; i < n ; i ++) {
			cin >> arr[i];
		}
		brr[0]=arr[1]*arr[0];
		int k = 1;
		for(int i = 0 ; i < n - 2 ; i ++) {
			brr[k] = arr[i] * arr[i+2];
			k ++;
		}
		brr[k] = arr[n-1] * arr[n-2];
		for(int i = 0 ; i <= k ; i ++){
			cout << brr[i] << " " ;
		}
		cout << endl;	
	}
	return 0;
}
