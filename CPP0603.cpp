#include<bits/stdc++.h>
using namespace std;
void vietHoa(string &x){
	x[0] = toupper(x[0]);
	for(int i = 1; i < x.length(); i++){
		x[i] = tolower(x[i]);
	}
}
class SinhVien{
	private:
		string name, class_of_std, date_of_birth, code_of_std;
		double gpa;
	public:
		SinhVien(){
			code_of_std = class_of_std = name = date_of_birth = "";
			gpa = 0;
		}
		SinhVien(string name, string date_of_birth, double gpa){
			this->name = name;
			this->date_of_birth = date_of_birth;
			this->gpa = gpa;
		}
		friend ostream& operator << (ostream&, SinhVien);
		friend istream& operator >> (istream&, SinhVien&);
};
ostream& operator << (ostream& out, SinhVien a){
	out << a.code_of_std << " " << a.name << " " << a.class_of_std << " " << a.date_of_birth << " "<< fixed << setprecision(2) << a.gpa;
	return out;
}
istream& operator >> (istream& in, SinhVien& a){
	a.code_of_std = "B20DCCN001";
	getline(cin, a.name);
	stringstream ss(a.name);
	vector<string> v;
	string tmp;
	while(ss >> tmp){
		v.push_back(tmp);
	}
	a.name = "";
	vietHoa(v[v.size() - 1]);
	for(int i = 0; i < v.size() - 1; i++){
		vietHoa(v[i]);
		a.name = a.name + v[i];
		if(i != v.size() - 2)
			a.name = a.name + " ";
	}
	a.name += " ";
	a.name += v.back();
	getline(cin, a.class_of_std);
	cin >> a.date_of_birth >> a.gpa;
	if(a.date_of_birth[2] != '/')
		a.date_of_birth = "0" + a.date_of_birth;
	if(a.date_of_birth[5] != '/')
		a.date_of_birth.insert(3, "0");
	return in;
}
#define a() a
int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}
