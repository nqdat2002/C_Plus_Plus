#include<bits/stdc++.h>
using namespace std;
class GiangVien {
private:
	string name;
public:
	string code, ten, subject;
	GiangVien() {
		ten = name = subject = "";
		code = "GV";
	}
	friend ostream& operator << (ostream& out, GiangVien);
	friend istream& operator >> (istream& in, GiangVien&);
};
int counta = 0;
istream& operator >> (istream& in, GiangVien& a) {
	counta++;
	a.code += string(2 - to_string(counta).length(), '0') + to_string(counta);
	getline(cin, a.name);
	getline(cin, a.subject);
	string str = "";
	stringstream ss(a.subject);
	string token;
	while (ss >> token) {
		str += toupper(token[0]);
	}
	a.subject = str;
	return in;
}
ostream& operator << (ostream& out, GiangVien a) {
	out << a.code << " " << a.name << " " << a.subject << endl;
	return out;
}

int main() {
	GiangVien ds[100];
	int n; 
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
		cin >> ds[i];
	int q; cin >> q;
	cin.ignore();
	while (q--) {
		string str; getline(cin, str);
		string res = "";
		stringstream ss(str);
		string token;
		while (ss >> token) {
			res += toupper(token[0]);
		}
		str = res;
		cout << "DANH SACH GIANG VIEN BO MON " << str << ":\n";
		for (int i = 0; i < n; i++) {
			if (str == ds[i].subject)
				cout << ds[i];
		}
	}
	return 0;
}


