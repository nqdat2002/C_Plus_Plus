#include <bits/stdc++.h>
using namespace std;
static int cnt = 0;
class MH{
	private:
		string ten, loai, ma;
		double gb, gm;
	public:
		friend istream& operator >> (istream& in, MH &a){
			cin.ignore();
			cnt++;
			getline(cin, a.ten);
			getline(cin, a.loai);
			cin >> a.gb >> a.gm;
			a.ma = to_string(cnt);
			return in;
		}
		friend ostream& operator << (ostream& out, MH a){
			cout << a.ma << " " << a.ten << " ";
			cout << a.loai << " " << fixed << setprecision(2) << a.gm - a.gb << endl;
			return out;
		}
		friend bool operator < (MH a, MH b){
			return (a.gm - a.gb > b.gm - b.gb);
		}
};
int main(){
	int n; cin >> n;
	MH ds[100];
	for(int i = 0; i < n; i ++) cin >> ds[i];
	sort(ds, ds + n);
	for(int i = 0; i < n; i ++) cout << ds[i];
	return 0;
}
/*

3
May tinh SONY VAIO
Dien tu
16400
17699
Tu lanh Side by Side
Dien lanh
18300
25999
Banh Chocopie
Tieu dung
27.5
37

*/
