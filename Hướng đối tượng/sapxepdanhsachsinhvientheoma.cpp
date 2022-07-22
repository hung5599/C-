#include<bits/stdc++.h>
using namespace std;
class SinhVien{
    private:
    string masv,ten,lop,email;
    public:
    SinhVien(){
        this -> masv = masv;
        this -> ten =ten;
        this -> lop = lop;
        this -> email = email;
    }
    friend istream &operator >> (istream &in, SinhVien&);
    friend ostream &operator << (ostream &out, SinhVien);
     bool operator < (SinhVien b) {
        return this -> masv < b.masv;
    } 
};
istream &operator >> (istream &in, SinhVien &a){
    getline(in,a.masv);
    getline(in,a.ten);
    getline(in,a.lop);
    getline(in,a.email);
    return in;
}
ostream &operator << (ostream &out, SinhVien a){
    out << a.masv << " " << a.ten << " " << a.lop << " " << a.email << "\n";
    return out;
}
int main(){
    vector <SinhVien> v;
    SinhVien temp;
    while(cin >> temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    for(SinhVien x :v){
        cout << x;
    }
}