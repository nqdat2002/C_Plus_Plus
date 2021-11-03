#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> arr(n), arr2(n);
		for(int i = 0; i < n; i ++){
			cin >> arr[i];
			arr2[i] = arr[i];
		}
		int left = 0, right = 0;
		sort(arr.begin(), arr.end());
		for(int i = 0; i < n; i ++)
			if(arr[i] != arr2[i]){
				left = i;
				break;
			}
		for(int i = n - 1; i >= 0; i --)
			if(arr[i] != arr2[i]){
				right = i;
				break;
			}
		cout << left + 1 << " " << right + 1;
		cout << endl;	
	}
	return 0;
}
