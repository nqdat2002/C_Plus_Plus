#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
using namespace std;

bool isPrime(long long int n) { 
    if (n < 2) 
        return 0; 
    if (n <= 3) 
        return 1; 
    if (n % 2 == 0 || n % 3 == 0) 
        return 0; 
    for (long long int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return 0; 
    return 1; 
} 
int main(){
	int t; 
	cin >> t;
	while(t--){
		long long int n, m;
		int cnt=0;
		cin >> n >> m;
		int count=0;
		for(long long int i=n;i<=sqrt(m);i++){
			if(isPrime(i))	cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}/*
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);              
    cout.tie(0);
	long int n,a,b,i,j,sum=0,m;
	bool N[1000000];
 	for (i = 2; i <= 1000000; i++){
    	N[i] = true;
  	}
  	for (i = 2; i <= sqrt(1000000); i++) {
    	if (N[i] == true)
		{
    	 	for (j = 2 * i; j <= 1000000; j += i) {
     			N[j] = false;
      		}
    	}
  	}
	int t;
	cin >> t;
	while(t--){
		int cnt=0;
		cin >> a >> b;
		if(b<a) swap(a, b);
		for(j=a;j<=b;j++){
			if(N[j])
				cnt++;
		}
		cout << cnt;
		cout << endl;
	}
	return 0;
}
*/

