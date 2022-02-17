#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ten, lop, ns;
	double gpa;
};
void nhap(SinhVien &a){
	getline(cin, a.ten);
	getline(cin, a.lop);
	getline(cin, a.ns);
	cin >> a.gpa;
	// 01/01/2002
	// 0123456789
	if(a.ns[1] == '/') a.ns.insert(0, "0");
	if(a.ns[4] == '/') a.ns.insert(3, "0");  
}
void in(SinhVien a){
	cout << "B20DCCN001 " << a.ten << " " << a.lop << " " << a.ns << " ";
	cout << fixed << setprecision(2) << a.gpa << endl;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
