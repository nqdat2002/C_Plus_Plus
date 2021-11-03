#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
	int t; 
	cin >> t; 
	while(t--){ 
		int n,cnt=0; 
		cin >> n; 
		long long arr[100000]; 
		for(int i=1;i<=n;i++){ 
			cin >> arr[i];
		}
		for(int i=1;i<=n;i++){  
			if(arr[i]!=0) 
				cout<< a[i] << " "; 
			else 
				cnt++; 
		} 
		for(int i=1;i<=dem;i++) 
			cout << "0" << " "; 
		cout<<endl; 
	}
	return 0;
}
/*
#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
	int t; 
	cin >> t; 
	while(t--){ 
		int n; 
		cin >> n; 
		int inp; 
		vector <int> arr; 
		vector <int> arrw; 
		for(int i=0 ; i<n ; i++){ 
			cin >> inp; 
			arr.push_back(inp);
		} 
		for(int i=0 ; i<n ; i++){ 
			if(arr[i]!=0){ 
				arrw.push_back(arr[i]); 
			} 
		} 
		sort(arrw.begin(), arrw.end()); 
		arrw.resize(arr.size()); 
		for(int i=0 ; i<n ; i++){ 
			cout << arrw[i] << " "; 
		} 
		cout << endl; 
	}
}
*/
