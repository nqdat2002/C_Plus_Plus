#include <bits/stdc++.h>
using namespace std;
struct SoTay{
	string ngay, ho, dem, ten, sdt;
	void gan(string x, string y, string z, string t, string w){
		ngay = x;
		ho = y;
		dem = z;
		ten = t;
		sdt = w;
	}
};
vector<SoTay> v;
bool cmp(SoTay x, SoTay y){
	if(x.ten == y.ten)
		return x.dem < y.dem;
	return x.ten < y.ten;
}
int main(){
	v.clear();
	SoTay tmp;
	ifstream file;
	file.open("SOTAY.txt");
	string ngay1, ho1, dem1, ten1, sodt;
	string n;
	while(file >> n){
		if(n == "Ngay"){
			file >> n;
			ngay1 = n;
			file >> ho1;
			file >> dem1;
			file >> ten1;
			file >> sodt;
			tmp.gan(ngay1, ho1, dem1, ten1, sodt);
			v.push_back(tmp);
		}
		else{
			ho1 = n;
			file >> dem1;
			file >> ten1;
			file >> sodt;
			tmp.gan(ngay1, ho1, dem1, ten1, sodt);
			v.push_back(tmp);	
		}
	}	
	file.close();
	ofstream file2;
	file2.open("DIENTHOAI.txt");
	sort(v.begin(), v.end(), cmp);
	for(int i = 0; i < v.size(); i++){
		file2 << v[i].ho <<" " << v[i].dem << " " << v[i].ten << ":" << " " << v[i].sdt << " " << v[i].ngay << endl;
	}
	file2.close();
	return 0;
}
