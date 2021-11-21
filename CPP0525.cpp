#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	double Point1, Point2, Point3;
	string student_code, name, student_class;
};
bool Comparation(SinhVien A, SinhVien B) {
	if (A.name < B.name) 
		return true;
	return false;
}
void nhap(SinhVien& x) {
    cin.ignore();
	getline(cin, x.student_code);
	getline(cin, x.name);
	getline(cin, x.student_class);
	cin >> x.Point1 >> x.Point2 >> x.Point3;
}
void in_ds(SinhVien ds[], int N) {
	for(int i = 0; i < N; i ++){
		cout << i + 1 << " " << ds[i].student_code << " " << ds[i].name << " " << ds[i].student_class << " ";
		cout << fixed << setprecision(1) << ds[i].Point1 << " " << ds[i].Point2 << " " << ds[i].Point3 << endl;
	}
}
void sap_xep(SinhVien ds[], int N){
    sort(ds, ds +  N, Comparation);
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
