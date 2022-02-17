#include<bits/stdc++.h>
using namespace std;
int main(){
//	int t;
//	cin >> t;
//	while(t--) {
		int n;
		cin >> n;
		int arr[105];
		bool check[10005]={false};
		for(int i = 0 ; i < n ; i ++){
			cin >> arr[i];		
		}
		sort(arr, arr+n);
		for(int i = 0 ; i < n ; i ++){
			if( !check[arr[i]] ) {
				cout << arr[i] << " ";
				check[arr[i]] = true;
			}
		}	
//	}
	return 0;
}