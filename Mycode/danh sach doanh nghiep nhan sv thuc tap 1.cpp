#include <bits/stdc++.h>
using namespace std;
class DN{
	private:
		string ma, ten;
		int sl;
	public:
		void nhap(){
			cin >> ma;
			cin.ignore();
			getline(cin, ten);
			cin >> sl;
		}
		void in(){
			cout << ma << " " << ten << " " << sl << endl;
		}
		string getma(){
			return ma;
		}
		int getsl(){
			return sl;
		}
};
 
bool cmp(DN a, DN b){
	if(a.getsl() != b.getsl())
		return a.getsl() > b.getsl();
	return a.getma() < b.getma();
}
 
int main(){
	int n; cin >> n;
	DN a[n];
	for(int i = 0; i < n; i++) a[i].nhap();
	sort(a, a + n, cmp);
	for(int i = 0; i < n; i++) a[i].in();
	return 0;
}
