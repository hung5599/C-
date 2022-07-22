#include<bits/stdc++.h>
using namespace std;
void solonnhat(int n,int tong){
    int a[n];
    int i=0;
    int h=9;
    while(i<n){
        if(tong-h>=0){
            a[i]=  h;
            tong-= h;
            cout << a[i];
               i++;
        }
        else h--;
    }
}
void sonhonhat(int n,int tong){
    int a[n];
    int tmp = tong;
    --tmp;
    for(int i=n-1;i>0;i--){
        if(tmp>=9){
            a[i]= 9;
            tmp-=9;
        }
        else if( tmp !=0){
            a[i]= tmp;
            tmp =0;
        }
        else if(tmp==0) a[i]=0;
    }
    a[0]= tmp + 1;
    for(int i=0;i<n;i++) cout << a[i];
    cout <<" ";
}


int main(){
        int n,tong;
        cin >> n >> tong;
        if(tong > 9*n || (tong==0&&n>1)) cout << "-1 -1";
        else{
        sonhonhat(n,tong);
        solonnhat(n,tong);
        }
}