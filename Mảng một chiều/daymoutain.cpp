#include<bits/stdc++.h>
using namespace std;
bool moutain(int arr[],int n,int a,int b){
    int tmp=0;
    for(int i=a;i<=b;i++){
        if(arr[i]>arr[i+1]){
            tmp=i;
            break;
        }
    }
    for(int i=tmp;i<=b-1;i++ ){
        if(arr[i]<arr[i+1]) return false;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        cin >> a >> b;
        if(moutain(arr,n,a,b)==true) cout << "Yes";
        else cout <<"No";
        cout <<endl;

    }
}