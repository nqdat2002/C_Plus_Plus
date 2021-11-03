#include <bits/stdc++.h>
using namespace std;
class NhanVien{
	private:
		string name, sex, date_of_birth, address, phone_number, date_of_company;
		string Code;
	public:
		NhanVien(){
			address = phone_number = sex = date_of_company = name = date_of_birth = "";
			Code = "";
		}
		NhanVien(string name, string sex, string date_of_birth, string address, string phone_number, string date_of_company){
			this->name = name;
			this->sex = sex;
			this->date_of_birth = date_of_birth;
			this->address = address;
			this->phone_number = phone_number; 
			this->date_of_company = date_of_company;
		}
		friend ostream& operator << (ostream&, NhanVien);
		friend istream& operator >> (istream&, NhanVien&);
};
ostream& operator << (ostream& out, NhanVien a){
	out << a.Code << " " << a.name << " " << a.sex << " " << a.date_of_birth << " " << a.address << " " << a.phone_number << " " << a.date_of_company;
	return out;
}
istream& operator >> (istream& in, NhanVien& a){
	a.Code = "00001";
	getline(cin, a.name);
	getline(cin, a.sex);
	getline(cin, a.date_of_birth);
	getline(cin, a.address);
	getline(cin, a.phone_number);
	getline(cin, a.date_of_company);
	if(a.date_of_birth[2] != '/')
		a.date_of_birth = "0" + a.date_of_birth;
	if(a.date_of_birth[5] != '/')
		a.date_of_birth.insert(3, "0");
		
	if(a.date_of_company[2] != '/')
		a.date_of_company = "0" + a.date_of_company;
	if(a.date_of_company[5] != '/')
		a.date_of_company.insert(3, "0");	
	return in;
}
#define a() a
int main(){
    NhanVien a();
    cin >> a;
    cout << a;
    return 0;
}

