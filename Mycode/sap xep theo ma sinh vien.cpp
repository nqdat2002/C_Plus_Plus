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
};
int main(){
	vector<SinhVien> v;
	SinhVien tmp;
	while(cin >> tmp){
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	for(SinhVien x : v){
		cout << x;
	}
	return 0;
}