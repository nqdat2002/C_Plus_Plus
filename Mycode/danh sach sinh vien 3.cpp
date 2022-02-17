#include<bits/stdc++.h>
using namespace std;
struct SinhVien {
    string name, code_of_student, date_of_birth;
    string code;
    float gpa;
};
void input(SinhVien& X) {
    getline(cin, X.name);
    getline(cin, X.code_of_student);
    getline(cin, X.date_of_birth);
    cin >> X.gpa;
    cin.ignore();
}
void nhap(SinhVien ds[], int N) {
   	cin.ignore();
    for (int i = 0; i < N; i ++) {
        input(ds[i]);
        if (i < 9){
			stringstream ss;
			ss << (i+1);
			string str = ss.str();
			ds[i].code = ds[i].code + ("B20DCCN00" + str);
		}
        else { 
        	stringstream ss;
			ss << (i+1);
			string str = ss.str();
			ds[i].code = ds[i].code + ("B20DCCN0" + str);
		}
    }
}
void vietHoa(string &x){
	x[0] = toupper(x[0]);
	for(int i = 1; i < x.length(); i++){
		x[i] = tolower(x[i]);
	}
}
void chuanhoa(string s){
	stringstream ss(s);
	vector<string> v;
	string tmp;
	while(ss >> tmp){
		v.push_back(tmp);
	}
	vietHoa(v[v.size() - 1]);
	for(int i = 0; i < v.size() - 1; i++){
		vietHoa(v[i]);
		cout << v[i];
		if(i != v.size() - 2)
			cout << " ";
	}
	cout << " ";
	cout << v.back();					
}
bool Comparation(SinhVien a, SinhVien b){
	return a.gpa > b.gpa;
}
void sapxep(SinhVien ds[], int N){
	sort(ds, ds + N, Comparation);
}
void in(SinhVien ds[], int N) {
    for (int i = 0; i < N; i ++) {
        if (ds[i].date_of_birth[1] == '/')
            ds[i].date_of_birth.insert(0, "0");
        if (ds[i].date_of_birth[4] == '/')
            ds[i].date_of_birth.insert(3, "0");
        cout << ds[i].code << " ";
		chuanhoa(ds[i].name);
		cout << " ";
		cout << ds[i].code_of_student<< " " << ds[i].date_of_birth << " ";
		cout << fixed << setprecision(2) << ds[i].gpa;
		cout << endl;
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}