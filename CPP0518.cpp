#include <bits/stdc++.h>
using namespace std;
struct NhanVien {
    string name, sex, date_of_birth, address, phone_number, date_of_company;
    int day, month, year, code;
    string str;
};
int number = 0;
void nhap(NhanVien& X) {
    if (number == 0)
	cin.ignore();
    number ++;
    getline(cin, X.name);
    getline(cin, X.sex);
    getline(cin, X.date_of_birth);
    getline(cin, X.address);
    getline(cin, X.phone_number);
    getline(cin, X.date_of_company);
    X.month = (X.date_of_birth[0] - '0') * 10 + X.date_of_birth[1] - '0';
    X.day = (X.date_of_birth[3] - '0') * 10 + X.date_of_birth[4] - '0';
    X.year = (X.date_of_birth[6] - '0') * 1000 + (X.date_of_birth[7] - '0') * 100 + (X.date_of_birth[8] - '0') * 10 + (X.date_of_birth[9] - '0');
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
void sapxep(NhanVien* ds, int N) {
    for (int i = 0; i < N; i++)
		ds[i].code = i;
    sort(ds, ds + N, Comparation);
}
void inds(NhanVien ds[], int N) {
    for (int i = 0; i < N; i++){
        string str;
        if (ds[i].code < 9 ) 
			str = "0000";
        else 
			str = "000";
        cout << str << ds[i].code + 1 << " " << ds[i].name << " ";
		cout << ds[i].sex << " " << ds[i].date_of_birth << " " ;
		cout << ds[i].address << " " << ds[i].phone_number << " ";
		cout << ds[i].date_of_company << endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
