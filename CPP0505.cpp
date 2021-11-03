#include<bits/stdc++.h>
using namespace std;
struct NhanVien {
    string name, sex, date_of_birth, address, phone_number, date_of_company;
};
void nhap(NhanVien& x) {
    getline(cin, x.name);
    getline(cin, x.sex);
    getline(cin, x.date_of_birth);
    getline(cin, x.address);
    getline(cin, x.phone_number);
    getline(cin, x.date_of_company);

}
void in(NhanVien x) {
    if (x.date_of_birth[1] == '/')
        x.date_of_birth.insert(0, "0");
    if (x.date_of_birth[4] == '/')
        x.date_of_birth.insert(3, "0");
        
    if (x.date_of_company[1] == '/')
            x.date_of_company.insert(0, "0");
    if (x.date_of_company[4] == '/')
        x.date_of_company.insert(3, "0");
    cout << "00001 " << x.name << " " << x.sex << " " << x.date_of_birth << " ";
	cout << x.address << " " << x.phone_number << " " << x.date_of_company;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
