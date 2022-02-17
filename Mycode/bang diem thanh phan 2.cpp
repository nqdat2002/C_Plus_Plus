#include <bits/stdc++.h>
using namespace std;
#define ms(s,n) memset(s,n,sizeof(s))
#define present(t, x) (t.find(x) != t.end())
#define all(a) a.begin(),a.end()

typedef long long ll;
const ll mod = 1e9 + 7;
// Author: Nguyen Quoc Dat
// Code: B20DCPT053
// Organization: PTIT
// Date:
// Program:
// -------------------  Your code STARTS here !!!---------------------------

struct Student{
	double Point1, Point2, Point3;
	string student_code, name, student_class;
};
bool cmp(Student A, Student B) {
	if (A.name < B.name) 
		return true;
	return false;
}
void nhap(Student& x) {
	getline(cin, x.student_code);
	getline(cin, x.name);
	getline(cin, x.student_class);
	cin >> x.Point1 >> x.Point2 >> x.Point3;
	getchar();
}
void xuat(Student x) {
	cout << x.student_code << " " << x.name << " " << x.student_class << " ";
	cout << fixed << setprecision(1) << x.Point1 << " " << x.Point2 << " " << x.Point3;
}
int main() {
	Student Str[100];
	int n; 
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
		nhap(Str[i]);
	sort(Str, Str + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << i + 1 << " ";
		xuat(Str[i]);
		cout << endl;
	}
	return 0;
}
