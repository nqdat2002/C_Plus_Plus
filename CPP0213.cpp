#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
bool Isfibo(int n){
	int fibo[100];
	fibo[1]=0;
	fibo[2]=1;
	for(int i=3;i<=17;i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	int mark=0;
	for(int i=1;i<=17;i++){
		if(n==fibo[i]){
			return true;
			mark++;
			break;
		}
	}
	if(mark==0) return false;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,arr[105];
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		for(int i=0;i<n;i++){
			if(Isfibo(arr[i])) cout << arr[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
