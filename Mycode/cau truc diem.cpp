#include <bits/stdc++.h>
using namespace std;
struct Point
{
    double x, y;
};
typedef struct Point P;
void input(P& D){
    cin >> D.x >> D.y;
}
double distance(P C,P D){
    return sqrt( (C.x-D.x)*(C.x - D.x) + (C.y-D.y)*(C.y-D.y));
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}