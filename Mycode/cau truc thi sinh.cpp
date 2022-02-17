#include<bits/stdc++.h>
using namespace std;
struct ThiSinh {
    string ten, d;
    double p1, p2, p3;
};
void nhap(ThiSinh& A) {
    getline(cin, A.ten);
    getline(cin, A.d);
    cin >> A.p1 >> A.p2 >> A.p3;
}
void in(ThiSinh A) {
    cout << A.ten << " " << A.d << " ";
    cout << fixed << setprecision(1) << A.p1 + A.p2 + A.p3;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}