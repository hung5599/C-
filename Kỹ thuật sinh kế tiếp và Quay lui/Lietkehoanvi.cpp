#include<bits/stdc++.h>
using namespace std;
int n;
int x[100],ck[100];
void incauhinh(){
    for(int i=1;i<=n;i++) cout << x[i];
    cout << endl;
}
void HvDq(int i){
    for(int j=1;j<=n;j++){
        if(ck[j]==0) {
            x[i] = j;
            ck[j] = 1;
            if(i==n){
                incauhinh();
            }
            else {
            HvDq(i+1);
            }
        ck[j]=0;
        }
    }
}
int main(){
    cin >> n;
    memset(ck,0,sizeof(ck));
    
    HvDq(1);
}