#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Luong{
	string ma, ten;
	ll lcb, pc;
	int hs;
};
void nhap(Luong& a){
	getline(cin, a.ma);
	getline(cin, a.ten);
	cin >> a.lcb;
	if(a.ma.substr(0, 2) == "HP")
		a.pc = 900000;
	if(a.ma.substr(0, 2) == "HT")
		a.pc = 2000000;
	if(a.ma.substr(0, 2) == "GV")
		a.pc = 500000;
	a.hs = (a.ma[2] - 48) * 10 + a.ma[3] - 48;
}
void in(Luong a){
	cout << a.ma << " " << a.ten << " " << a.hs << " ";
	cout << a.pc << " " << a.hs * a.lcb + a.pc << endl;
}
int main(){
	Luong x;
	nhap(x);
	in(x);
	return 0;
}
