#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct tp{
	string ma, loai, ip, date;
	int cho;
	ll phi;
};
void nhap(tp &a){
	cin >> a.ma >> a.loai >> a.cho >> a.ip >> a.date;
	if(a.ip == "OUT") a.phi = 0;
	else{
		if(a.cho == 5) a.phi = 10000;
		else if(a.cho == 7) a.phi = 15000;
		else if(a.cho == 2) a.phi = 20000;
		else if(a.cho == 29) a.phi = 50000;
		else if(a.cho == 45) a.phi = 70000;
	}
}
void xuly(tp ds[], int n){
	ll res = 0;
	bool ck[1000];
	memset(ck, true, sizeof(ck));
	for(int i = 0; i < n; i ++){
		res = ds[i].phi;
		if(ck[i]){
			ck[i] = false;
			for(int j = i + 1; j < n; j ++){
				if(ds[i].date == ds[j].date){
					res = res + ds[j].phi;
					ck[j] = false;
				}
			}
			cout << ds[i].date << ": " << res << endl;
		}
	}
}
int main(){
	struct tp ds[100];
	int n; cin >> n;
	for(int i = 0; i < n; i ++) nhap(ds[i]);
	xuly(ds, n);
	return 0;
}
