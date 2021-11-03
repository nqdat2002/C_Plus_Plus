#include <bits/stdc++.h>
using namespace std;
long long arr[23];
void init(){
	arr[0] = 1;
	for(int i = 1; i <= 20; i ++){
		arr[i] = arr[i - 1] * i;
	}
}
void Solve(){
	int N, G, R, B;
	cin >> N >> G >> R >> B;
	long long ans = 0;
	for(int i = N; i >= R; i --){
		for(int j = N - R; j >= G; j --){
			int k = N - j - i;
			if(k >= B){
				ans += arr[N]/(arr[i] * arr[j] * arr[k]);
			}
		}
	}
	cout << ans << endl;
}
int main(){
	int t; cin >> t;
	init();
	while(t--){
		Solve();
	}
	return 0;
}

