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
/*
long a, b, n, arr[100005];
int main() {
	cin >> a >> b >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	arr[0] = 0, arr[n + 1] = a + 1;
	sort(arr, arr + n + 2);
	long res = 1e6 + 7;
	for (int i = 0; i < n+1; i++) {
		long tmp = lower_bound(arr, arr + n + 2, arr[i] + b) - arr;
		if (tmp >= n + 2)
			continue;
		if (arr[i] + b == arr[tmp]) {
			if (tmp - i < res)
				res = tmp - i;
		}
		else
			if (tmp - i - 1 < res)
				res = tmp - i - 1;
	}
	cout << tmp;
	return 0;
}/*
