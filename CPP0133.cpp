#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
    cin.tie(0);              
    cout.tie(0);
	long int n,a,i,j,sum=0,m;
	bool N[1000000];
 	for (i = 2; i <= 1000000; i++){
    	N[i] = true;
  	}
  	for (i = 2; i <= sqrt(1000000); i++) {
    	if (N[i] == true){
    	 	for (j = 2 * i; j <= 1000000; j += i) {
     			N[j] = false;
      		}
    	}
  	}
	int t;
	cin >> t;
	while(t--){
		cin >> a;
		j = 2;
		while(j<=a){
			if(N[j])
				cout << j << " ";
			j++;
		}
		cout << endl;
	}
	return 0;
}
