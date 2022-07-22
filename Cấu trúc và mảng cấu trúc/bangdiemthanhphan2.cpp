#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
    string ten,masv,lop;
    double d1,d2,d3;
};
int r=0;
void nhap(SinhVien &a){
    if(r==0) cin.ignore(1);
    getline(cin,a.masv);
    getline(cin,a.ten);
    getline(cin,a.lop);
    cin >> a.d1 >> a.d2 >> a.d3;
    cin.ignore(1);
    int n= a.masv.size();
    r++;
}
void sap_xep(SinhVien ds[] , int n){
     for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
        if(ds[i].ten > ds[j].ten) swap(ds[i],ds[j]);
        }
    }
}
void in_ds(SinhVien ds[],int n){
    for(int i=0;i<n;i++){
	cout << i+1 << " " << ds[i].masv <<" "<< ds[i].ten << " " << ds[i].lop <<" ";
    cout << fixed << setprecision(1) << ds[i].d1 << " ";
    cout << fixed << setprecision(1) << ds[i].d2 << " ";
    cout << fixed << setprecision(1) << ds[i].d3;
    cout <<"\n";
}
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}