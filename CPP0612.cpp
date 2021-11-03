#include <bits/stdc++.h>
using namespace std;
void vietHoa(string &x){
	x[0] = toupper(x[0]);
	for(int i = 1; i < x.length(); i++){
		x[i] = tolower(x[i]);
	}
}
int coun = 0;
class SinhVien {
private:
    string code_of_std, name, class_of_std, date_of_birth;
    float gpa;
public:
    SinhVien() {
        code_of_std = name = class_of_std = date_of_birth  = "";
        gpa = 0;
    }
    friend istream& operator>>(istream&, SinhVien&);
    friend ostream& operator<<(ostream&, SinhVien);
};
ostream& operator<<(ostream& out, SinhVien a) {

    out << a.code_of_std << " " << a.name << " " << a.class_of_std << " " << a.date_of_birth << " " << fixed << setprecision(2) <<  a.gpa << endl;
    return out;
}
istream& operator >> (istream& in, SinhVien& a) {
	
    coun ++;
    a.code_of_std = "B20DCCN" + string(3 - to_string(coun).length(), '0') + to_string(coun);
    cin.ignore();
    getline(cin, a.name);
    stringstream ss(a.name);
	vector<string> v;
	string tmp;
	while(ss >> tmp){
		v.push_back(tmp);
	}
	a.name = "";
	vietHoa(v[v.size() - 1]);
	for(int i = 0; i < v.size() - 1; i++){
		vietHoa(v[i]);
		a.name = a.name + v[i];
		if(i != v.size() - 2)
			a.name = a.name + " ";
	}
	a.name += " ";
	a.name += v.back();
    getline(cin, a.class_of_std);
    getline(cin, a.date_of_birth);
    cin >> a.gpa;
    
    if (a.date_of_birth[1] == '/')
		a.date_of_birth.insert(0, "0");
		
    if (a.date_of_birth[4] == '/')
		a.date_of_birth.insert(3, "0"); 
    return in;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}


