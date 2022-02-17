#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
using namespace std;
bool isPrime(long long n) { 
    if (n < 2) 
        return 0; 
    if (n <= 3) 
        return 1; 
    if (n % 2 == 0 || n % 3 == 0) 
        return 0; 
    for (long long i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return 0; 
    return 1; 
} 
int main(){
	int t; 
	cin >> t;
	while(t--){
		long long m;
		int cnt=0;
		cin >> m;
		int count=0;
		for(int i=1;i<=sqrt(m);i++){
			if(isPrime(i))	cnt++;
		//	cout << i*i << " ";
		}
		cout << cnt << endl;
	}
	return 0;
}
