#include<bits/stdc++.h>
using namespace std;
struct dta{
	int val, pos;
};
bool swapp(dta a, dta b){
	if(a.val < b.val) 
		return true;
	if(a.val == b.val && a.pos < b.pos) 
		return true;
	return false;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		vector<dta> arr(n);
		for(int i = 0; i < n; i++){
			cin >> arr[i].val;
			arr[i].pos = i;
		}
		int res = 0;
		sort(arr.begin(), arr.end(), swapp);
		for(int i = 0; i < n; i++){
			while(arr[i].pos != i){
				res ++;
				swap(arr[i], arr[arr[i].pos]);
			}
		}
		cout << res;
		cout << endl;
	}
	return 0;
}