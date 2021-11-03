#include <bits/stdc++.h>
using namespace std;
void FileIO(){
	freopen("input.txt","r", stdin);
	freopen("output.txt","w",stdout);
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
		friend void nhap(SinhVien&);
		friend void in(SinhVien);
};
void nhap(SinhVien &a){
	a.code_of_std = "B20DCCN001";
	getline(cin, a.name);
	getline(cin, a.class_of_std);
	cin >> a.date_of_birth >> a.gpa;
	if(a.date_of_birth[2] != '/')
		a.date_of_birth = "0" + a.date_of_birth;
	if(a.date_of_birth[5] != '/')
		a.date_of_birth.insert(3, "0");
}
void in(SinhVien a){
	cout << a.code_of_std << " ";
	cout << "Nguyen Van A" << " ";
//	cout << a.name << " ";
	cout << a.class_of_std << " ";
	cout << a.date_of_birth << " ";
	cout << fixed << setprecision(2) << a.gpa;
	cout << endl;
}
#define a() a
int main(){
    SinhVien a();
    nhap(a);
    in(a);
    return 0;
}

