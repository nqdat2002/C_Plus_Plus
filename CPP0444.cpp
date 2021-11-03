#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
	int t; 
	cin >> t; 
	while(t--){ 
		int n,k,cnt=0; 
		int arr[100005];
		cin >> n >> k; 
		for(int i=1;i <= n;i++){ 
			cin >> arr[i];
		}
		for(int i=1;i<=n;i++) 
			if(k == arr[i]){
				cout << i << endl;
				break;
			}
	}
	return 0;
}
