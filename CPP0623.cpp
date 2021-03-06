#include <bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string code_of_std, name, class_of_std, email;
	public:
		friend ostream& operator << (ostream& out, SinhVien a){
			out << a.code_of_std << " " << a.name << " " << a.class_of_std << " " << a.email << endl;
			return out;
		}
 
		friend istream& operator >> (istream& in, SinhVien &a){
			in >> a.code_of_std;
			in.ignore();
			getline(in, a.name);
			in >> a.class_of_std >> a.email;
			return in;
		}
 
		friend bool operator < (SinhVien a, SinhVien b){
			return a.code_of_std < b.code_of_std;
		}
		string getlop(){
			return class_of_std;
		}
};
int main(){
	map<int,vector<SinhVien> > mp;
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		SinhVien tmp; cin >> tmp;
		int khoa = stoi(tmp.getlop().substr(1, 2));
		mp[khoa].push_back(tmp);
	}
	int q; cin >> q;
	while(q--){
		int khoa; cin >> khoa;
		cout << "DANH SACH SINH VIEN KHOA " << khoa << ":\n";
		for(SinhVien x : mp[khoa % 100]){
			cout << x;
		}
	}
	return 0;
}
