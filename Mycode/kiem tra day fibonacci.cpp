#include <iostream>
#include <vector>
using namespace std;
typedef long long int ll;
ll fibo[100];
void sinh(){
	fibo[1] = 0; fibo[2] = 1;
	for(int i = 3; i <= 92; i ++)
		fibo[i] = fibo[i - 1] + fibo[i - 2];
}
bool check(ll n){
	for(int i = 1; i <= 92; i ++){
		if(n == fibo[i]){
			return true;
		}
	}
	return false;
}
int main(){
	int T; cin >> T;
	sinh();
	while(T--){
		ll n; cin >> n;
		vector<int> arr(n);
		for(int i = 0; i < n; i ++) cin >> arr[i];
		for(int i = 0; i < n; i ++) 
			if(check(arr[i])) 
				cout << arr[i] << " ";
		cout << endl;
	}
	return 0;
}

