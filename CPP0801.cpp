#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main(){
    
    ifstream input("input.txt");
    fstream output;
    output.open("output.txt", ios::out );
    string line;
    while(!input.eof()){
        getline(input, line);
        output << line << endl;
    }
    input.close();
    output.close();
    return 0;
}