#include <bits/stdc++.h>
using namespace std;
#define ms(s,n) memset(s, n, sizeof(s))
#define present(t, x) (t.find(x) != t.end())

typedef long long ll;
const ll mod = 1e9 + 7;
// Author: Nguyen Quoc Dat
// Code: B20DCPT053
// Organization: PTIT
// Date:
// Program:
// -------------------  Your code STARTS here !!!---------------------------

bool snt[1000000];
void Sang(){
 	for (int i = 2; i <= 1000000; i++)
    	snt[i] = true;
  	for (int i = 2; i <= sqrt(1000000); i++) {
    	if (snt[i] == true)
    	 	for (int j = 2 * i; j <= 1000000; j += i) 
     			snt[j] = false;
  	}
}
int main(){
	int t; cin >> t;
	Sang();
	while(t--){
		int a, b;
		cin >> b >> a;
		for(int j = b; j <= a; j ++){
			if(snt[j])
				cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}

