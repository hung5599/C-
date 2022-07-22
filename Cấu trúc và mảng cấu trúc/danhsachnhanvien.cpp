#include <bits/stdc++.h>
using namespace std;
struct NhanVien{
	string ten,gt,ntn,dc,sdt,khd;
};
int r=0;
	void nhap(NhanVien &A){
		if(r==0) cin.ignore(1);
		getline(cin,A.ten);
		getline(cin,A.gt );
		getline(cin,A.ntn);
		getline(cin,A.dc);
		getline(cin,A.sdt);
		getline(cin,A.khd);
		r++;
	}
	void inds( NhanVien A[],int n){
		for(int i=0;i<n;i++){
			string s = to_string(i+1);
		while(s.size()<5) s="0"+s;
		cout << s <<" " << A[i].ten <<" "<< A[i].gt << " " << A[i].ntn << " "  << A[i].dc << " " << A[i].sdt <<" " <<A[i].khd ;
		cout <<"\n";
	}
	}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}