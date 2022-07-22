#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
    	int  m,n,a,b;
    	cin >> m >> n >> a >> b;
		int dem=0;
		int special=0;
		int h=(a*b)/__gcd(a,b);
    	for(int i=m;i<=n;i++){
			if(i%a==0) dem++;
			if(i%b==0) dem++;
			if(i%h==0) special++;
		}
    	cout <<  dem - special << endl;
	}
}