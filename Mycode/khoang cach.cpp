#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
	int test,i;
	cin >> test;
	while(test--){
		double x,y,z,t;
		cin >> x >> y >> z >> t;
		cout << fixed << setprecision(4) << (double)sqrt( (x-z)*(x-z) + (y-t)*(y-t)) << endl ;
	}
	return 0;
}
