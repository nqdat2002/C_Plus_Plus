#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int T; cin >> T;
	while(T--){
		int n, m, a[10005], b[10005];
		cin >> n >> m;
		for(int i = 0; i < n; i ++)
			cin >> a[i];
		for(int j = 0; j < m; j ++)
			cin >> b[j];
		sort(a, a + n);
		sort(b, b + m);
		cout << (long long int)a[n - 1] * b[0] << endl;
	}
	return 0;
}
