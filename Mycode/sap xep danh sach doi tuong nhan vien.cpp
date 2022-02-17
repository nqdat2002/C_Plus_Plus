#include <bits/stdc++.h>
using namespace std;
int coun = 0;
class NhanVien {
private:
    string code, sex, name, address, phone, datec;
public:
	string date_of_birth;
	int day, month, year;
    NhanVien() {
        code = name = address = date_of_birth  = phone = datec = sex = "";
    }
    friend istream& operator >> (istream&, NhanVien&);
    friend ostream& operator << (ostream&, NhanVien);
};
ostream& operator << (ostream& out, NhanVien a) {

    out << a.code << " " << a.name << " " << a.sex << " " << a.date_of_birth << 
	" " << a.address << " " << a.phone << " " << a.datec << endl;
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
    getline(cin, a.datec);
    
    if (a.date_of_birth[1] == '/')
		a.date_of_birth.insert(0, "0");
		
    if (a.date_of_birth[4] == '/')
		a.date_of_birth.insert(3, "0"); 
	
    if (a.datec[1] == '/')
		a.datec.insert(0, "0");
		
    if (a.datec[4] == '/')
		a.datec.insert(3, "0");
	a.month = (a.date_of_birth[0] - '0') * 10 + a.date_of_birth[1] - '0';
   	a.day =  (a.date_of_birth[3] - '0') * 10 + a.date_of_birth[4] - '0';
    a.year = (a.date_of_birth[6] - '0') * 1000 + (a.date_of_birth[7] - '0') * 100 + (a.date_of_birth[8] - '0') * 10 + (a.date_of_birth[9] - '0'); 
    return in;
}
bool Comparation(NhanVien X, NhanVien Y) {
    if (X.year < Y.year)
		return true;
    if (X.year == Y.year && X.month < Y.month)
		return true;
    if (X.year == Y.year && X.month == Y.month && X.day < Y.day)
		return true;
    return false;
}
void sapxep(NhanVien*ds,int N) {
    sort(ds, ds + N, Comparation);
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
