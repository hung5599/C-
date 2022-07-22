#include<bits/stdc++.h>
using namespace std;
void process(){
    int n;
    cin >> n;
    vector <int> v;
    int vt1,vt2;
    int a[100000];
    for(int i=0;i<n;i++) {
        cin >> a[i];
        v.push_back(a[i]);
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]!=v[i]){
            vt1=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]!=v[i]){
            vt2=i;
            break;
        }
    }
    cout << vt1+1 << " " << vt2+1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        process();
        cout << endl;
    }
}