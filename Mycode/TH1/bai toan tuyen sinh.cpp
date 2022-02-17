#include <bits/stdc++.h>
using namespace std;
struct TS{
	string ma, ten;
	double t, l, h;
	double d;
	double tong;
};
void nhap(TS &a){
	getline(cin, a.ma);
	getline(cin, a.ten);
	cin >> a.t >> a.l >> a.h;
	if(a.ma[2] == '1') a.d = 0.5;
	if(a.ma[2] == '2') a.d = 1.0;
	if(a.ma[2] == '3') a.d = 2.5;
	a.tong = 2 * a.t + a.l + a.h;
}
void in(TS a){
	cout << a.ma << " " << a.ten << " ";
	if(a.d == (int)a.d)
		cout << (int)a.d << " ";
	else 
		cout << fixed << setprecision(1) << a.d << " ";
	if(a.tong == (int)a.tong) 
		cout << (int)a.tong << " ";
	else 
		cout << fixed << setprecision(1) << a.tong << " ";
	if(a.tong + a.d >= 24.0) 
		cout << "TRUNG TUYEN";
	else 
		cout << "TRUOT";
	cout << endl;
}
int main(){
	struct TS a;
	nhap(a);
	in(a);
	return 0;
}
