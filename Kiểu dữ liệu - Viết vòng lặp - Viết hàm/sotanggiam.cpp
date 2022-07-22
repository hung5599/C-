#include<bits/stdc++.h>
using namespace std;
int mu(int n){
    int so=1;
    while(n>0){
        so*=10;
        n--;
    }
    return so;
}
bool tang(int x) { 
    int n1=x%10; 
    int nho=x; 
    x/=10; 
    while (x>0) { 
        int n2=x%10; 
        if (n1<=n2) return false; 
        x/=10; n1=n2; 
}
return true; 
} 
bool giam(int x) { 
    int n1=x%10; 
    int nho=x; 
    x/=10; 
    while (x>0) { 
        int n2=x%10; 
        if (n1>=n2) 
        return false; 
        x/=10; 
        n1=n2; 
        } 
    return true; }
    int SNT(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) 
            return 0;
}
return 1;
}
int main(){
    int t;
    cin >> t ;
    while(t--){
        int n;
        cin >> n;
        int dem=0;
        for(int i= mu(n-1);i< mu(n);i++ ){
            if(tang(i)||giam(i)) if(SNT(i)) dem++;
        }
        cout << dem <<"\n";
    }

    return 0;
}