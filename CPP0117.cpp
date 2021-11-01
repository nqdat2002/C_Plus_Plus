#include <bits/stdc++.h>
using namespace std;
int dem(long long int n){
	int x=0;
	while(n>0){
		int i=n%10;
		n/=10;
		x++;
	}
	return x;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long int n;
		cin >> n;
		int x=dem(n);
		while(x>=1){
			int i=n%10;
			n=n/10+i;
			x--;
		}
		cout << n << endl;
	}
	return 0;
}
