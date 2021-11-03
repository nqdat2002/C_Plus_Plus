#include<bits/stdc++.h>
using namespace std;
struct PhanSo {
    long long int tu, mau;
};
void nhap(PhanSo& x) {
    cin >> x.tu >> x.mau;
}
void in(PhanSo x) {
    cout << x.tu << "/" << x.mau;
}
void rutgon(PhanSo& x) {
    long long int tmp = __gcd(x.tu, x.mau);
    x.tu /= tmp; 
	x.mau /= tmp;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}


