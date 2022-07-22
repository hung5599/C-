#include<bits/stdc++.h>
using namespace std;
struct HangHoa {
    int mamh;
    double mua,ban,lai;
    string ten,nhom;

};
int r=0;
void nhap(HangHoa ds[],int n){
for (int i = 0; i < n; i++)
{   
    if(r==0) cin.ignore(1);
    ds[i].mamh = i+1;
    getline(cin,ds[i].ten);
    getline(cin,ds[i].nhom);
    cin >> ds[i].mua >> ds[i].ban;
    ds[i].lai = ds[i].ban - ds[i].mua;
}
}
void sapxep(HangHoa ds[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
        if(ds[i].lai < ds[j].lai) swap(ds[i],ds[j]);
        }
    }
}
void in(HangHoa ds[],int n){
    for (int i = 0; i < n; i++)
    {
        cout << ds[i].mamh << " "<< ds[i].ten << " ";
        cout << ds[i].nhom <<" " << fixed << setprecision(2) << ds[i].lai << endl;
    
}
}
int main(){
    struct HangHoa ds[1000];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}