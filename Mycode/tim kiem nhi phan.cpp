#include <iostream>
using namespace std;
int tim(int a[], int l, int r, int x) {
  	if (r >= l) {
    	int m = l + (r - l) / 2; 
    	if (a[m] == x)
    		return m;
    	if (a[m] > x)
      		return tim(a, l, m - 1, x);
    	return tim(a, m + 1, r, x);
  	}
  	return -1;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
		int a[n];
		for(int i = 0 ; i < n ; i ++)
			cin >> a[i];
		int res = (tim(a, 0, n - 1, x)== -1) ? -1 : 1;
		cout << res << endl;
	}
	return 0;
}