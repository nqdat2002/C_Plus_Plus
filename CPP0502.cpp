#include<bits/stdc++.h>
using namespace std;
struct ThiSinh {
    string name;
	string date_of_birth;
    float Point1, Point2, Point3;
};
void nhap(ThiSinh& x) {
    getline(cin, x.name);
    getline(cin, x.date_of_birth);
    cin >> x.Point1 >> x.Point2 >> x.Point3;
}
void in(ThiSinh x) {
    cout << x.name << " " << x.date_of_birth << " ";
	cout << fixed << setprecision(1) << x.Point1 + x.Point2 + x.Point3;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
