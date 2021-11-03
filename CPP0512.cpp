#include <bits/stdc++.h>
using namespace std;
struct PhanSo {
	long long int tu, mau;
};
void process(PhanSo a, PhanSo b) {
	long long int x = a.tu;
	long long int y = b.tu; 
	long long int z = a.mau; 
	long long int t = b.mau;
	long long int tmp = (b.mau * a.mau )/ __gcd(b.mau, a.mau);
	a.tu = a.tu * tmp / a.mau;
	b.tu = b.tu * tmp / b.mau;
	PhanSo res;
	long long int ts = (a.tu + b.tu);
	long long int bc = tmp;
	cout << ts * ts / __gcd(ts * ts, bc * bc) << "/" << bc * bc / __gcd(ts * ts, bc * bc) << " ";
	res.tu = x * y * ts * ts;
	res.mau = z * t * bc * bc;
	cout << res.tu / __gcd(res.tu, res.mau) << "/" << res.mau / __gcd(res.tu, res.mau) << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
