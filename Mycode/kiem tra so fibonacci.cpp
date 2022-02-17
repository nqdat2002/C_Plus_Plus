#include <iostream>
using namespace std;
typedef long long int ll;
ll fibo[100];
void kt(){
	fibo[1] = 0; fibo[2] = 1;
	for(int i = 3; i <= 92; i ++)
		fibo[i] = fibo[i - 1] + fibo[i - 2];
}
int main(){
	kt();
	int T; cin >> T;
	while(T--){
		ll n; cin >> n;
		int danhdau = 0;
		for(int i = 1; i <= 92; i ++){
			if(n == fibo[i]){
				cout << "YES" << '\n';
				danhdau = 1;
				break;
			}
		}
		if(danhdau == 0) cout << "NO" << '\n';
	}
	return 0;
}

