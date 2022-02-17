#include <iostream>
#include <algorithm>
using namespace std; 
typedef long long ll;
int main(){ 
	int T; cin >> T; 
	cin.ignore();
	while(T--) { 
		string N; cin >> N;
		ll M; cin >> M;
		ll kq = 0; 
		int a[1005]; 
		for(int i = 0 ; i < N.length(); i ++)
			a[i] = N[i] - '0';
		for(int i = 0 ; i < N.length(); i ++)
			kq = (kq * 10 + a[i]) % M; 
		cout << kq << endl;
	} 
	return 0;
}
