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
		friend ostream& operator << (ostream&, NhanVien);
		friend istream& operator >> (istream&, NhanVien&);
};
ostream& operator << (ostream& out, NhanVien a){
	out << a.Code << " " << a.name << " " << a.sex << " " << a.date_of_birth << " " << a.address << " " << a.phone_number << " " << a.date_of_company << endl;
	return out;
}
int coun = 0;
istream& operator >> (istream& in, NhanVien& a){
    if(coun == 0) cin.ignore();
	coun ++;
	a.Code = "00" + string(3 - to_string(coun).length(), '0') + to_string(coun);
	getline(cin, a.name);
	getline(cin, a.sex);
	getline(cin, a.date_of_birth);
	getline(cin, a.address);
	getline(cin, a.phone_number);
	getline(cin, a.date_of_company);
	if (a.date_of_birth[1] == '/')
		a.date_of_birth.insert(0, "0");
		
    if (a.date_of_birth[4] == '/')
		a.date_of_birth.insert(3, "0"); 

    if (a.date_of_company[1] == '/')
		a.date_of_company.insert(0, "0");
		
    if (a.date_of_company[4] == '/')
		a.date_of_company.insert(3, "0"); 	
	return in;
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}