#include <bits/stdc++.h> 
using namespace std; 
int main() { 
	int a[10005], f[10005] = {0}, n = 0;
	bool ok = false;
	int x;
	while(cin >> x){
		ok = false;
		for(int i = 0; i < n; i++){
			if(x == a[i]){
				f[i]++;
				ok = true;
				break;
			}
		}
		if(!ok){
			a[n] = x;
			n++;
		}
	}
	for(int i = 0; i < n; i++)
		cout << a[i] << " " << f[i] + 1 << endl;
	
	return 0;
}