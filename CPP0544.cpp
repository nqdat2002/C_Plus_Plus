#include<bits/stdc++.h>
using namespace std;
const double PI = 3.141592653589793238;
struct toado{
	double x,y;
};
int main(){
	int t;
	cin >> t;
	struct toado A,B,C;
	while(t--) {
		cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;
		double a=sqrt((A.x-B.x)*(A.x-B.x)+(A.y-B.y)*(A.y-B.y));
		double b=sqrt((A.x-C.x)*(A.x-C.x)+(A.y-C.y)*(A.y-C.y));
		double c=sqrt((B.x-C.x)*(B.x-C.x)+(B.y-C.y)*(B.y-C.y));
		if(a<b+c&&b<a+c&&c<a+b)
			cout << fixed << setprecision(3) << (double)PI*(a*b*c)*(a*b*c)/((a+b+c)*(a+b-c)*(a-b+c)*(-a+b+c)) << endl;
		else
			cout << "INVALID" << endl;
	}
	return 0;
}
