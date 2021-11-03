#include<bits/stdc++.h>
using namespace std;
struct SinhVien {
    string name, classes, date_of_birth;
    float gpa;
};
void nhap(SinhVien& x) {
    getline(cin, x.name);
    getline(cin, x.classes);
    getline(cin, x.date_of_birth);
    cin >> x.gpa;
}
void in(SinhVien x) {
    if (x.date_of_birth[1] == '/')
        x.date_of_birth.insert(0, "0");
    if (x.date_of_birth[4] == '/')
        x.date_of_birth.insert(3, "0");
    cout << "B20DCCN001 " << x.name << " " << x.classes << " " << x.date_of_birth<< " ";
	cout << fixed << setprecision(2) << x.gpa;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
