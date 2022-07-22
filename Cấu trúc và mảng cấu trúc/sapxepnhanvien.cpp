#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
	string ma,ten,gt,ntn,dc,sdt,khd;
    long long kq;
};
   long long chuyendoi(string s){
    vector<int> v;
    for(int i=0;i<s.size();i++){
        if (s[i]>='0'&&s[i]<= '9'){
            int k= s[i]-'0';
            v.push_back(k);
        }
    }
    long long h= v[4]*10000000 + v[5]*1000000 + v[6]*100000 + v[7]*10000 + v[0]*1000 + v[1]*100 + v[2]*10 + v[3];
    return h;
    }
int r=0;
	void nhap(NhanVien &ds){
        if(r==0) {
            cin.ignore(1);
            r++;
        }
		getline(cin,ds.ten);
		getline(cin,ds.gt );
		getline(cin,ds.ntn);
		getline(cin,ds.dc);
		getline(cin,ds.sdt);
		getline(cin,ds.khd);
        ds.kq = chuyendoi(ds.ntn);
	}
void sapxep(NhanVien ds[],int n){
    for(int i=0;i<n;i++){
			string s = to_string(i+1);
		while(s.size()<5) s="0"+s;
        ds[i].ma = s;
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
        if(ds[i].kq > ds[j].kq) swap(ds[i],ds[j]);
        }
    }
}
void inds(NhanVien ds[],int n){
        for(int i=0;i<n;i++){
		cout << ds[i].ma << " " << ds[i].ten <<" "<< ds[i].gt << " " << ds[i].ntn << " "  << ds[i].dc << " " << ds[i].sdt <<" " <<ds[i].khd ;
		cout <<"\n";
        }
	}
int m;
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}