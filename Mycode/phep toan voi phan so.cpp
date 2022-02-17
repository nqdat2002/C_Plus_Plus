#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct PhanSo {
	ll tu, mau;
};
void process(PhanSo a, PhanSo b) {
	ll x = a.tu;
	ll y = b.tu; 
	ll z = a.mau; 
	ll t = b.mau;
	ll tmp = (b.mau * a.mau )/ __gcd(b.mau, a.mau);
	a.tu = a.tu * tmp / a.mau;
	b.tu = b.tu * tmp / b.mau;
	PhanSo res;
	ll ts = (a.tu + b.tu);
	ll bc = tmp;
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