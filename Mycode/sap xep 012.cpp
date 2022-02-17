#include <iostream> 
#include <algorithm>
using namespace std; 
typedef long long ll;
int main() { 
	int T; cin >> T; 
	while(T--) { 
		ll n; cin >> n; 
		ll a[n + 5]; 
		for(int i = 0; i < n; i ++) 
			cin >> a[i]; 
		sort(a, a + n);
		for(int i = 0; i < n; i ++) 
			cout << a[i] << " "; 
		cout << endl;
	} 
	return 0;
}
