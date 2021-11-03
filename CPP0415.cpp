#include <bits/stdc++.h>
using namespace std;
const int nmax=100005;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m,arr1[nmax],arr2[nmax];
		cin >> n >> m;
		for(int i=0;i<n;i++){
			cin >> arr1[i];
		}
		for(int j=0;j<m;j++){
			cin >> arr2[j];
		}
		sort(arr1,arr1+n);
		sort(arr2,arr2+m);
		cout << (long long int)arr1[n-1]*arr2[0] << endl;
	}
	return 0;
}

