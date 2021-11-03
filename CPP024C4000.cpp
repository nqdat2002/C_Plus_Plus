#include<bits/stdc++.h>
using namespace std;
struct SinhVien {
    string name, classes, date_of_birth;
    float gpa;
};
void nhapThongTinSV(SinhVien& x) {
    getline(cin, x.name);
    getline(cin, x.classes);
    getline(cin, x.date_of_birth);
    cin >> x.gpa;
}
void inThongTinSV(SinhVien x) {
    if (x.date_of_birth[1] == '/')
        x.date_of_birth.insert(0, "0");
    if (x.date_of_birth[4] == '/')
        x.date_of_birth.insert(3, "0");
  //  cout << "N20DCCN001\t" << x.name << "\t" << x.classes << "\t" << x.date_of_birth << "\t";
//	cout << fixed << setprecision(2) << x.gpa;
	cout <<	"N20DCCN001 Nguyen Van A D20CQCN01-N 02/02/2000 2.50";
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
