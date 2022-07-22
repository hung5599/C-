#include<bits/stdc++.h>
using namespace std;
int x[100];
int n,k;
void intohop(){
    for(int i=1;i<=k;i++){
        cout << x[i];
    }
    cout << "\n";
}
void ThDq(int i){
    for(int j=x[i-1]+1;j<=n-k+i;j++){
        x[i]=j;
        if(i==k) intohop();
        else ThDq(i+1);
    }
}
int main(){
    cin >> n >> k;
    x[0]=0;
    ThDq(1);
    return 0;
}