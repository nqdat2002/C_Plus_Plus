#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--) {
		int n, k; 
		cin >> n >> k;
		int b[n];
		for(int i = 0 ; i < n ; i ++)
			cin >> b[i];		
		sort(b, b + n);
		cout << b[k - 1] << endl;	
	}
	return 0;
}
