/*
#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
	int t; 
	cin >> t; 
	while(t--){ 
		int n,k,cnt=0; 
		cin >> n >> k; 
		long long arr[10000]; 
		for(int i=0;i<n;i++){ 
			cin >> arr[i];
		}
		sort(arr, arr+n, greater<int>());
		for(int i=0;i<k;i++) 
			cout << arr[i] << " "; 
		cout<<endl; 
	}
	return 0;
}
*/
#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
	int t; 
	cin >> t; 
	while(t--){ 
		int n,k,cnt=0; 
		cin >> n >> k; 
		vector<int> arr(n); 
		for(int i=0;i<n;i++){ 
			cin >> arr[i];
		}
		sort(arr.begin(), arr.end(), greater<int>());
		for(int i=0;i<k;i++) 
			cout << arr[i] << " "; 
		cout<<endl; 
	}
	return 0;
}
