#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct NhanVien{
	string ma;
	string ten, cv;
	ll luong, thuong, pc;
	int ngay;
};
void nhap(NhanVien &x){
	getline(cin, x.ten);
	cin >> x.luong >> x.ngay >> x.cv;
	if(x.cv == "PGD") x.pc = 200000;
	if(x.cv == "GD") x.pc = 250000;
	if(x.cv == "TP") x.pc = 180000;
	if(x.cv == "NV") x.pc = 150000;
	if(x.ngay > 25) 
		x.thuong = x.luong * x.ngay * 1/5;
	else if(x.ngay >= 22) 
		x.thuong = x.luong * x.ngay * 1/10;
	else x.thuong = 0;
}
void in(NhanVien x){
	cout << "NV01 " << x.ten << " " << x.luong * x.ngay << " ";
	cout << x.thuong << " " << x.pc << " ";
	cout << x.luong * x.ngay + x.thuong + x.pc << endl;
}
int main(){
	NhanVien a;
	nhap(a);
	in(a);
	return 0;
}
