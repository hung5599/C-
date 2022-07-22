#include<bits/stdc++.h>
using namespace std;
class GiangVien{
    private:
    string magv,hoten,mon,ten;
    public:
    GiangVien(){
        this -> magv = magv;
        this -> hoten =hoten;
        this -> mon = mon;
        this -> ten = ten;
    }
    friend istream &operator >> (istream &in, GiangVien&);
    friend ostream &operator << (ostream &out, GiangVien);
    friend string getmon(GiangVien a){
        return a.mon;
    }
    friend void sapxep();
};
string chuanhoa(string m){
        vector <char> v;
        string l="abcd";
        stringstream s(m);
        string word;
        while(s>>word){
            transform(word.begin(), word.end(),word.begin(),:: tolower);
            word[0]-=32;
            v.push_back(word[0]);
        }
        for(int i=0;i<v.size();i++){
            l[i]= v[i];
        }
        return l;
    }
int v=0;
istream &operator >> (istream &in, GiangVien &a){
    string s = to_string(v+1);
    while(s.size()<2) s= "0"+s;
    a.magv ="GV" + s;
    v++;
    getline(in,a.hoten);
    getline(in,a.mon);
    a.mon = chuanhoa(a.mon);
    return in;
}
ostream &operator << (ostream &out, GiangVien a){
    out << a.magv << " " << a.hoten << " " << a.mon ;
    out <<  "\n";
    return out;
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    GiangVien ds[n];
    for(int i=0;i<n ;i++){
        cin >> ds[i];
    }
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
    string s;
    getline(cin,s);
    string p = chuanhoa(s);
    cout << "DANH SACH GIANG VIEN BO MON " << p <<":"<< endl;
    for(int i=0;i<n ;i++){
        string k = getmon(ds[i]);
        if(k==p) cout << ds[i];
    }
    }
}