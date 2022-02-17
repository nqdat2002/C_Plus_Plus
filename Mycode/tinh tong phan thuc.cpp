#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
	double sum=0;
	int n,i;
	cin >> n;
	for(int i=1;i<=n;i++){
		sum=sum+1*1.0/i;
	}
	cout << fixed << setprecision(4) << sum;
	return 0;
}
