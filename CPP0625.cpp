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
istream& operator >> (istream& in, GiangVien&a) {
	counta++;
	a.code += string(2 - to_string(counta).length(), '0') + to_string(counta);
	getline(cin, a.name);
	int tmp = a.name.find_last_of(" ");
	a.ten = a.name.substr(tmp, 100);
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

bool Comparation(GiangVien A, GiangVien B) {
	if (A.ten < B.ten) 
		return true;
	if (A.ten == B.ten && A.code < B.code)
		return true;
	return false;
}
void sapxep(GiangVien* ds, int n) {
	sort(ds, ds + n, Comparation);
}
int main() {
	GiangVien ds[100];
	int n; 
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) 
		cin >> ds[i];
	sapxep(ds, n);
	for (int i = 0; i < n; i++)
		cout << ds[i];
	return 0;
}

