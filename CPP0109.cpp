#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int Parity(ll x) {
    int c = 0, d = 0;
    while(x) {
        int i = x % 10;
        (i % 2 == 0) ? c ++ : d ++;
        x /= 10;
    }
    if(c == d)
    	return true;
    return false;
}
int main() {
   	ll m, j;
    int cnt = 0;
    cin >> m;
    if(m % 2 == 0){
    	for(j = pow(10, m - 1); j < pow(10, m); j ++){
      	  	if(Parity(j)){
        		cout << j << " ";
      			cnt ++;
     			if(cnt % 10 == 0) cout << endl;
 			}		
    	}
    }
	return 0;
}
