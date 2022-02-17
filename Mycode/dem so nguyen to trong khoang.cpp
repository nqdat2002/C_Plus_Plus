#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
bool snt(int x){
	if(x < 2) return false;
	for(int i = 2; i <= sqrt(x); i ++)
		if(x % i == 0)
			return false;
	return true;
}
int main(){
	int T; cin >> T;
	while(T --){
		int x, y, dem = 0;
		cin >> x >> y;
		for(int i = x; i <= y; i++)
			if(snt(i)) dem ++;
		cout << dem << '\n';
	}
	return 0;
}

