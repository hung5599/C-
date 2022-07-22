#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream Filein;
    Filein.open("VANBAN.in");
    ofstream Fileout;
    Fileout.open("output.out");
    set <string> st;
    while (!Filein.eof())
    {
    string s;
    getline(Filein,s);
    stringstream a(s);
    string word;
    while(a>>word){
        st.insert(word);
    }
    }
    for(auto x: st){
        Fileout << x << "\n";
    }
    Filein.close();
}