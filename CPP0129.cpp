#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int Solve(int b, int a){
	int c = 0;
	for(int j = a; j <= b; j = j + a){
		int d = j;
		while(d % a == 0){
			c ++;
			d /= a;
		}
	}
	return c;
}
int main(){
	int t, m, n;
	cin >> t;
	while(t--){
		cin >> m >> n;
		cout << Solve(m, n) << endl;
	}
	return 0;
}
