#include <bits/stdc++.h>
#include <cmath>
using namespace std;
unsigned long long fact(int n){
	unsigned long long res=1;
	for(int i=1;i<=n;i++){
		res=res*i;
	}
	return res;
}
int main(){
	unsigned long long sum=0;
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		sum=sum+fact(i);
	}
	cout << sum;
	return 0;
}
