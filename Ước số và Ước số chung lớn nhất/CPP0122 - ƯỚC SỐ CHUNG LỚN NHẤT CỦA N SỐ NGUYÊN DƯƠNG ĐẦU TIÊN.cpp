#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
	if (n<2) return false;
	else {
		for (int i=2;i<=sqrt(n);i++){
			if (n%i==0) return false ;
		}
		return true ;
	}
}
int main(){
    int t;
    cin >>t;
    while(t--){
    	long long n;
    	cin >> n;
    	long long tich=1;
    	for (long long i=1;i<=n;i++){
    		if (isPrime(i)){
    			long long max=1;
				int j=0;
				while (pow(i,j)<=n){
					max=pow(i,j);
					j++;
				}
			tich*=max;
			}
	 }
    	cout << tich <<"\n";
    	
	}
}
