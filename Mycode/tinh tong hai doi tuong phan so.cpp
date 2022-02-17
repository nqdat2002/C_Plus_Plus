#include <bits/stdc++.h>
using namespace std;
void FileIO(){
	freopen("input.txt","r", stdin);
	freopen("output.txt","w",stdout);
}
class PhanSo{
	private:
		long long tu, mau;
	public:
		PhanSo(long long tu, long long mau);
		friend ostream& operator << (ostream&, PhanSo);
		friend istream& operator >> (istream&, PhanSo&);
		void rutgon();
		friend PhanSo operator + (PhanSo, PhanSo);
};
PhanSo::PhanSo(long long tu, long long mau){
	this->tu = tu;
	this->mau = mau;
}
ostream& operator << (ostream& out, PhanSo a){
	out << a.tu << "/" << a.mau << endl;
	return out;
}
istream& operator >> (istream& in, PhanSo &a){
	in >> a.tu >> a.mau ;
	return in;
}
void PhanSo::rutgon(){
	long long x = __gcd(tu, mau);
	tu /= x;
	mau /= x;
}
PhanSo operator + (PhanSo a, PhanSo b){
	PhanSo tong(1, 1);
	long long mauchung = a.mau * b.mau /__gcd(a.mau, b.mau);
	tong.tu = mauchung / a.mau * a.tu + mauchung / b.mau * b.tu;
	tong.mau = mauchung;
	tong.rutgon();
	return tong;
	
}
int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}