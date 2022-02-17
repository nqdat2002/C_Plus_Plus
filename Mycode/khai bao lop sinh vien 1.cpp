#include <bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
        string ten, ma, lop, ns;
        double diem;
    public:
        SinhVien(){
            ten = lop = ns  = ma = "";
            diem = 0;
        }
        SinhVien(string ten, string lop, string ma, double diem){
            this->ten = ten;
            this->lop = lop;
            this->ma = ma;
            this->diem = diem;
        }
        void nhap(){
            ma = "B20DCCN001";
            getline(cin, ten);
            getline(cin, lop);
            cin >> ns;
            cin >> diem;
            if(ns[1] == '/') ns.insert(0, "0");
            if(ns[4] == '/') ns.insert(3, "0");
        }
        void xuat(){
            cout << ma << " " << ten << " " << lop << " " << ns << " " << fixed << setprecision(2) << diem << endl;
        }

};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}