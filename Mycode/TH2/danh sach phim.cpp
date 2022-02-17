#include <bits/stdc++.h>
using namespace std;
void FileIO(){
	freopen("inputdsphim.txt", "r", stdin);
	freopen("outputdsphim.txt", "w", stdout);
}
int dem1 = 0, cnt = 0;
class TheLoai{
	public:
		string TL;
		string MaTL;
		TheLoai(){
			TL = MaTL = "";
		}
		friend istream& operator >> (istream& in, TheLoai& a) {
			if(dem1 == 0)
				in.ignore();
			dem1++;
			getline(in, a.TL);
			a.MaTL = "TL" + string(3 - to_string(dem1).length(), '0') + to_string(dem1);
			return in;
		}
		friend ostream& operator << (ostream& out, TheLoai a) {
			cout << a.MaTL << endl;
			return out;
		}
};

class Phim: public TheLoai{
private:
	int tap;
public:
	string ma, ten, ng, matl;
	string tl;
	Phim(){
		ma = ten = ng = matl = tl = "";
		tap = 0;
	}
	friend istream& operator >> (istream& in, Phim& a) {
		cnt++;
		// sau khi getline xog, choi cin >> a.matl; -> AC dm cuoc doi !!!
		// getline(cin, a.matl); -> Bug
		cin >> a.matl;
		cin.ignore();
		getline(in, a.ng);
		getline(in, a.ten);
		in >> a.tap;
		a.ma = "P" + string(3 - to_string(cnt).length(), '0') + to_string(cnt);
		return in;
	}
	void xuat(){
		
	}
	void Gan(TheLoai &x){
		if(x.MaTL == matl)
			tl = x.TL;
	}
	friend ostream& operator << (ostream& out, Phim& a) {
		cout << a.ma << " " << a.tl << " " << a.ng << " ";
		cout << a.ten << " " << a.tap << endl;
		return out;
	}
	friend bool operator < (Phim a, Phim b){
		if(a.ng != b.ng){
			if(a.ng.substr(6, 4) != b.ng.substr(6, 4))
				return a.ng.substr(6, 4) < b.ng.substr(6, 4);
			//01/01/2021
			//0123456789
			if(a.ng.substr(6, 4) == b.ng.substr(6, 4) && a.ng.substr(3, 2) != b.ng.substr(3, 2))
				return a.ng.substr(3, 2) < b.ng.substr(3, 2);
			return a.ng.substr(0, 2) < b.ng.substr(0, 2);
		}
		if(a.ng == b.ng && a.ten != b.ten)
			return a.ten < b.ten;
		if(a.ng == b.ng && a.ten == b.ten)
			return a.tap > b.tap;
		return false;
	}
};

int main(){
	FileIO();
	TheLoai ds[1000];
	int n, m; cin >> n >> m;
	for(int i = 0; i < n; i ++) cin >> ds[i];
	Phim p[1000];	
	for(int i = 0; i < m; i ++) cin >> p[i];
	for(int i = 0; i < m; i ++){
		for(int j = 0; j < n; j ++)
			if(p[i].matl == ds[j].MaTL)
				p[i].tl = ds[j].TL;
	}
	sort(p, p + m);
	for(int i = 0; i < m; i ++) cout << p[i];
	return 0;
}