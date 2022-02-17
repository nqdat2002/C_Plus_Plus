#include <iostream>
#include <vector>
using namespace std;
long sum_array(vector<int> a, int left, int right) {
	long sum = 0;
	for (int i = left - 1; i < right; i ++)
		sum = sum + a[i];
	return sum;
}
void Solve(){
	int n, Q; 
	cin >> n >> Q;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	while (Q --){
		int left, right; 
		cin >> left >> right;
		cout << sum_array(a, left, right);
		cout << endl;
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}

