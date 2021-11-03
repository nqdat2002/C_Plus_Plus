#include<bits/stdc++.h>
using namespace std;
struct PhanSo {
    long long int tu, mau;
};
void nhap(PhanSo& x) {
    cin >> x.tu >> x.mau;
}
PhanSo tong(PhanSo& a, PhanSo& b) {
    long long int gcda = __gcd(a.tu, a.mau);
    a.tu /= gcda; 
	a.mau /= gcda;
    long long int gcdb = __gcd(b.tu, b.mau);
    b.tu /= gcdb; 
	b.mau /= gcdb;
    long long int bc = a.mau * b.mau / __gcd(a.mau, b.mau);
    PhanSo res;
    res.tu = a.tu * (bc / a.mau) + b.tu * (bc / b.mau);
    res.mau = bc;
    long long int x = __gcd(res.tu, res.mau);
    res.tu /= x; 
	res.mau /= x;
    return res;
}
void in(PhanSo x) {
    cout << x.tu << "/" << x.mau;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}


