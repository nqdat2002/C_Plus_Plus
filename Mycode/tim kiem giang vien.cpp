#include <bits/stdc++.h>
using namespace std;
string chuanhoa(string str){
	string res = "";
	stringstream ss(str);
	string token;
	while(ss >> token){
		res += toupper(token[0]);
	}
	return res;
}
string getname(string name){
	string res, token;
	stringstream ss(name);
	while(ss >> token){
		res = token;
	}
	return res;
}
 
class GiangVien{
	private:
		string ten, bm, ma;
		static int cnt;
	public:
		void nhap();
		void in();
		string getTen(){
			return ten;
		}
		string getMa(){
			return ma;
		}
};
 
int GiangVien::cnt = 0;
void GiangVien::nhap(){
	cnt ++;
	string str = to_string(cnt);
	if(str.size() < 2) 
		str = "0" + str;
	ma = "GV" + str;
	getline(cin, ten);
	getline(cin, bm);
}
 
void GiangVien::in(){
	cout << ma << " " << ten << " " << chuanhoa(bm) << endl;
}
 
bool tim(string name, string word){
	for(char &x : name) 
		x = tolower(x);
	for(char &x : word) 
		x = tolower(x);
	return name.find(word) != string::npos;
}
 
int main(){
	int n; cin >> n;
	cin.ignore();
	GiangVien a[n];
	for(int i = 0; i < n; i++){
		a[i].nhap();
	}
	int q; cin >> q;
	while(q--){
		string str;
		cin >> str;
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << str << ": \n";
		for(GiangVien x : a){
			if(tim(x.getTen(), str)){
				x.in();
			}
		}
	}
	return 0;
}
