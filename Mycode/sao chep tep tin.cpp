#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main(){
    
    ifstream input("PTIT.in");
    fstream output;
    output.open("PTIT.out", ios::out );
    string line;
    while(!input.eof())
    {
        getline(input, line);
        output << line << endl;
    }
    input.close();
    output.close();
    return 0;
}