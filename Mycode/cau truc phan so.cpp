#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct PhanSo {
    ll tu, mau;
};
void nhap(PhanSo& a) {
    cin >> a.tu >> a.mau;
}
void in(PhanSo a) {
    cout << a.tu << "/" << a.mau;
}
void rutgon(PhanSo& a) {
    ll x = __gcd(a.tu, a.mau);
    a.tu /= x; 
	a.mau /= x;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}


