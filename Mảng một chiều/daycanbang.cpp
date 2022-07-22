#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n ;
		int a[n];
        int pos=-1;
        int trai=0;
        int phai=0;
		for (int i=0;i<n;i++){
			cin >> a[i];
            if(i>1) phai+=a[i];
		}
        trai =a[0];
        for(int i=1;i<n-1;i++){
            if(trai!=phai) {
                trai+=a[i];
                phai=phai-a[i+1];
            }
            else {
                pos=i;
                break;
                }
        }

        if(pos!=-1) cout << pos+1 << "\n";
        else cout << -1 <<"\n";
	}
}

