#include <bits/stdc++.h>
using namespace std;
struct SoPhuc{
	int thuc, ao;
};
SoPhuc binh_phuong_tong(SoPhuc &A, SoPhuc &B){
	SoPhuc tmp, res;
	tmp.thuc = A.thuc + B.thuc;
	tmp.ao = A.ao + B.ao;
	res.thuc = pow(tmp.thuc, 2) - pow(tmp.ao, 2);
	res.ao = tmp.ao * tmp.thuc * 2;
	return res;
}
void hien_thi(SoPhuc C){
	cout << C.thuc << " + " << C.ao << "i" << endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}