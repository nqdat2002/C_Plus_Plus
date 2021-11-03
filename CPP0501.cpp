#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
struct Point
{
	double x,y;
};
//typedef struct Point P;
void input(Point& M){
	cin >> M.x >> M.y;
}
double distance(Point& A, Point& B){
	double res = sqrt((A.x-B.x)*(A.x-B.x) + (A.y-B.y)*(A.y-B.y));
	return res;
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A, B) << endl;
    }
    return 0;
}

