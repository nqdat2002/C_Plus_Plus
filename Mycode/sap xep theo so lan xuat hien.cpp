#include<bits/stdc++.h>
using namespace std;
struct dta{
	int val, count;
};
bool swapp(dta a, dta b){
	if(a.count > b.count) 
		return true;
	if(a.count == b.count && a.val < b.val) 
		return true;
	return false;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		int a[10005] = {0};
		dta arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i].val;
			a[arr[i].val] ++;
		}
		for(int i = 0; i < n; i++)
			arr[i].count = a[arr[i].val];
		sort(arr, arr+n, swapp);
		for(int i = 0; i < n; i++)
			cout << arr[i].val << " ";
		
		cout << endl;
	}
	return 0;
}
