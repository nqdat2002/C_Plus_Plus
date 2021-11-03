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
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}

