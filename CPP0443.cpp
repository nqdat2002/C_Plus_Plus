/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int Binary_Search(vector<int> arr, int x) {
	int left = 0, right = arr.size() - 1;
	while (left <= right) {
		int tmp = (left + right) / 2;
		if (arr.at(tmp) == x) 
			return 1;
		else if (arr.at(tmp) < x) 
			left = tmp + 1;
		else 
			right = tmp - 1;
	}
	return -1;
}
int main() {
	int t; 
	cin >> t;
	while (t--) {
		int n; 
		cin >> n;
		n--;
		vector<int> arr(n);
		for (int i = 0; i < n; i++) 
			cin >> arr[i];
		sort(arr.begin(), arr.end());
		for (int i = 1; i < n+1; i++)
			if (Binary_Search(arr, i) == -1)
				cout << i << endl;
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
		int n,i,j;
		cin >> n;
		vector<int> arr(n);
		int m = n - 1;
		for(i = 0; i < m; i ++){
			cin >> arr[i];
		}	
		long long res = ((long long) n*(n + 1) / 2);
		for(i = 0; i < m; i ++){
			res = res - arr[i];
		}
		cout << res;
		cout << endl;
	}
	return 0;
}
