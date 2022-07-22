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
    friend string getten(GiangVien a){
        vector <string> v;
        stringstream s(a.hoten);
        string word;
        while(s>>word){
            v.push_back(word);
        }
        a.ten = v[v.size()-1];
        return a.ten;
    }
    friend string getma(GiangVien a){
        return a.magv;
    }
    friend void sapxep();
    friend void chuanhoa(GiangVien a){
        vector <char> v;
        stringstream s(a.mon);
        string word;
        while(s>>word){
            transform(word.begin(), word.end(),word.begin(),:: tolower);
            word[0]-=32;
            v.push_back(word[0]);
        }
        for(int i=0;i<v.size();i++){
            cout << v[i];
        }
    }
};
void sapxep(GiangVien ds[],int n){
    for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
          string m = getten(ds[i]);
          string n = getten(ds[j]);
          if(m>n) swap(ds[i],ds[j]);
          else if(m==n){
              string u = getma(ds[i]);
              string v = getma(ds[j]);
              if (u>v) swap(ds[i],ds[j]); 
          }
        }  
    }
}
int v=0;
istream &operator >> (istream &in, GiangVien &a){
    string s = to_string(v+1);
    while(s.size()<2) s= "0"+s;
    a.magv ="GV" + s;
    v++;
    getline(in,a.hoten);
    getline(in,a.mon);
    return in;
}
ostream &operator << (ostream &out, GiangVien a){
    string k= getten(a);
    out << a.magv << " " << a.hoten << " " << k << " ";
    chuanhoa(a);
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
    sapxep(ds,n);
    for(int i=0;i<n ;i++){
        cout << ds[i];
    }
}