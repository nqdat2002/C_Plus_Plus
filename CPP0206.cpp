#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);              
    cout.tie(0);
    int arr[100005],n,i,j;
    int t;
    cin >> t;
    while(t--){
    	cin >> n;
    	for(int i=0;i<n;i++){
    		cin >> arr[i];
		}
		sort(arr,arr+n);
		cout << arr[n-1] << endl;
	}
	return 0;
}
