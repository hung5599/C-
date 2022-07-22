#include<bits/stdc++.h>
using namespace std;
struct thoigian{
  int gio,phut,giay,kq;  
};
void nhap(thoigian test[],int n){
    for(int i=0;i<n;i++){
        cin >> test[i].gio >> test[i].phut >> test[i].giay;
        test[i].kq= (test[i].gio)*60*60 + (test[i].phut)*60 + (test[i].giay); 
    }
}
void sapxep(thoigian test[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
        if(test[i].kq > test[j].kq) swap(test[i],test[j]);
        }
    }
}
void in(thoigian test[],int n){
    for(int i=0;i<n;i++){
        cout << test[i].gio << " "<< test[i].phut <<" "<< test[i].giay <<"\n"; 
    }
}

int main(){
    struct thoigian test[5000];
    int n;
    cin >>n;;
    nhap(test,n);
    sapxep(test,n);
    in(test,n);
}