#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, k, b;
	cin >> n >> k >> b;
	int arr[100005] = {0};
	for(int i = 0; i < b; i ++){
		int tmp;
		cin >> tmp;
		arr[tmp] = 1;
	}
	int cnt = 0;
	for(int i = 1; i <= k; i ++){
		if(arr[i] == 1)
		 	cnt ++;
	}
	int res = cnt;
	for(int i = k + 1; i <= n; i++){
		cnt = cnt - arr[i - k] + arr[i];
		res = min(res, cnt);
	}
	cout << res;
	return 0;
}