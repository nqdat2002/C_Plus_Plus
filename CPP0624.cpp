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
		string getma(){
			return code_of_std;
		}
		string getlop(){
			return class_of_std;
		}
};
 
void viethoa(string &s){
	for(char &x : s){
		x = toupper(x);
	}
}
int main(){
	map<string,vector<SinhVien> > mp;
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		SinhVien tmp; cin >> tmp;
		string nganh = tmp.getma().substr(5, 2);
		mp[nganh].push_back(tmp);
	}
	int q; cin >> q;
	cin.ignore();
	while(q--){
		string ng;
		getline(cin, ng);
		viethoa(ng);
		cout << "DANH SACH SINH VIEN NGANH " << ng << ":\n";
		if(ng == "KE TOAN"){
			for(SinhVien x: mp["KT"]){
				cout << x;
			}
		}
		else if(ng == "CONG NGHE THONG TIN"){
			for(SinhVien x: mp["CN"]){
				if(x.getlop().find("E") == string::npos)
					cout << x;
			}
		}
		else if(ng == "AN TOAN THONG TIN"){
			for(SinhVien x: mp["AT"]){
				if(x.getlop().find("E") == string::npos)
					cout << x;
			}
		}
		else if(ng == "VIEN THONG"){
			for(SinhVien x: mp["VT"]){
				cout << x;
			}
		}
		else if(ng == "DIEN TU"){
			for(SinhVien x: mp["DT"]){
				cout << x;
			}
		}
	}
	return 0;
}

