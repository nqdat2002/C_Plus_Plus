#include<bits/stdc++.h>
using namespace std;
struct SinhVien {
    string name, classes, date_of_birth;
    float gpa;
};
void nhapThongTinSV(SinhVien& x) {
    getline(cin, x.name);
    cin >> x.classes;
    cin >> x.date_of_birth;
    cin >> x.gpa;
}
void inThongTinSV(SinhVien x) {
    if (x.date_of_birth[1] == '/')
        x.date_of_birth.insert(0, "0");
    if (x.date_of_birth[4] == '/')
        x.date_of_birth.insert(3, "0");
    cout << "N20DCCN001 " << x.name << " " << x.classes << " " << x.date_of_birth << " ";
	cout << fixed << setprecision(2) << x.gpa;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
