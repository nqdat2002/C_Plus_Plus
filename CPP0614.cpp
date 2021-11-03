#include <bits/stdc++.h>
using namespace std;
int coun = 0;
class NhanVien {
private:
    string code, sex, name, address, phone, date_of_birth, date;
public:
    NhanVien() {
        code = name = address = date_of_birth  = phone = date = sex = "";
    }
    friend istream& operator >> (istream&, NhanVien&);
    friend ostream& operator << (ostream&, NhanVien);
};
ostream& operator << (ostream& out, NhanVien a) {

    out << a.code << " " << a.name << " " << a.sex << " " << a.date_of_birth << 
	" " << a.address << " " << a.phone << " " << a.date << endl;
    return out;
}
istream& operator >> (istream& in, NhanVien& a) {
	if(coun == 0) cin.ignore();
    coun ++;
    a.code = "00" + string(3 - to_string(coun).length(), '0') + to_string(coun);
    getline(cin, a.name);
    getline(cin, a.sex);
    getline(cin, a.date_of_birth);
    getline(cin, a.address);
    getline(cin, a.phone);
    getline(cin, a.date);
    
    if (a.date_of_birth[1] == '/')
		a.date_of_birth.insert(0, "0");
		
    if (a.date_of_birth[4] == '/')
		a.date_of_birth.insert(3, "0"); 

    if (a.date[1] == '/')
		a.date.insert(0, "0");
		
    if (a.date[4] == '/')
		a.date.insert(3, "0"); 
    return in;
}
int main(){
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
