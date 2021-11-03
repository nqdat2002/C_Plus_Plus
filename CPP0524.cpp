#include<bits/stdc++.h>
using namespace std;
struct Student{
	double Point1, Point2, Point3;
	string student_code, name, student_class;
};
bool Comparation(Student A, Student B) {
	if (A.student_code < B.student_code) 
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
	sort(Str, Str + n, Comparation);
	for (int i = 0; i < n; i++) {
		cout << i + 1 << " ";
		xuat(Str[i]);
		cout << endl;
	}
	return 0;
}
