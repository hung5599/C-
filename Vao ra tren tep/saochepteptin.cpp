#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream Filein;
    Filein.open("PTIT.in");
    ofstream Fileout;
    Fileout.open("PTIT.out");
    while (!Filein.eof())
    {
    string s;
    getline(Filein,s);
    Fileout << s << endl;
    }
    Filein.close();
}