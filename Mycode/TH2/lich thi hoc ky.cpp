#include <bits/stdc++.h>
using namespace std;
void FileIO(){
	freopen("inputlichthiHK.txt", "r", stdin);
	freopen("outputlichthiHK.txt", "w", stdout);
}
int dem1 = 0, cnt = 0;
class MonThi{
	public:
		string ma;
		string ten;
		MonThi(){
			ten = ma = "";
		}
		friend istream& operator >> (istream& in, MonThi& a) {
			cin >> a.ma;
			cin.ignore();
			getline(cin, a.ten);
			return in;
		}
		friend ostream& operator << (ostream& out, MonThi a){
			cout << a.ma << " " << a.ten << endl;
			return out;
		}
};

class Lich: public MonThi{
public:
	string nhom;
	string mamon, ngay, gio, tenmon, macathi;
	Lich(){
		ma = ngay = gio = tenmon = "";
		nhom = macathi = "";
	}
	friend istream& operator >> (istream& in, Lich& a) {
		cnt++;
		cin >> a.mamon >> a.ngay >> a.gio >> a.nhom;
		a.macathi = "T" + string(3 - to_string(cnt).length(), '0') + to_string(cnt);
		return in;
	}

	friend ostream& operator << (ostream& out, Lich a) {
		cout << a.macathi << " " << a.mamon << " " << a.tenmon << " ";
		cout << a.ngay << " " << a.gio << " " << a.nhom << endl;
		return out;
	}
	friend bool operator < (Lich a, Lich b){
		if(a.ngay != b.ngay){
			if(a.ngay.substr(6, 4) != b.ngay.substr(6, 4))
				return a.ngay.substr(6, 4) < b.ngay.substr(6, 4);
			//01/01/2021
			//0123456789
			if(a.ngay.substr(6, 4) == b.ngay.substr(6, 4) && a.ngay.substr(3, 2) != b.ngay.substr(3, 2))
				return a.ngay.substr(3, 2) < b.ngay.substr(3, 2);
			return a.ngay.substr(0, 2) < b.ngay.substr(0, 2);
		}
		if(a.gio != b.gio){
			if(a.gio.substr(0, 2) != b.gio.substr(0, 2))
				return a.gio.substr(0, 2) < b.gio.substr(0, 2);
			//13:30
			//01234
			return a.gio.substr(3, 2) < b.gio.substr(3, 2);
		}
		return a.mamon < b.mamon;
	}
};

int main(){
	FileIO();
	MonThi ds[1000];
	int n, m; cin >> n >> m;
	for(int i = 0; i < n; i ++) cin >> ds[i];
	Lich p[1000];	
	for(int i = 0; i < m; i ++) cin >> p[i];
	for(int i = 0; i < m; i ++){
		for(int j = 0; j < n; j ++)
			if(p[i].mamon == ds[j].ma)
				p[i].tenmon = ds[j].ten;
	}
	sort(p, p + m);
	for(int i = 0; i < m; i ++) cout << p[i];
	return 0;
}