#include <iostream> 
#include <math.h> 
#include <vector>
using namespace std; 
int SNT(long long n) { 
	if(n < 2) return 0; 
	for(long long i = 2; i <= sqrt(n); i++) { 
		if(n%i==0) return 0; 
	} 
	return 1; 
}
int tong(int n){
	int sum=0;
	while (n>0){
		int m=n%10;
		sum+=m;
		n/=10;
	}
	return sum;
} 
int main() { 
	int t;  
	cin >> t; 
	while(t--) {
	long long n; 
	cin >> n;
	vector <int> v;
	int tong1=tong(n);
	if(SNT(n)) cout << "NO"; 
	else {
	for(long long i = 2; i <= sqrt(n); i++) { 
	while(n%i==0 && SNT(i)) { 
	v.push_back(i); 
	if(i != n/i && SNT(n/i)){
		v.push_back(n/i); 
		} 
		n/=i; 
		}	 
	}
	int tong2=0;
	for (int i=0;i<v.size() ;i++){
		int k=tong(v[i]);
		tong2+=k;
	}
	if (tong1==tong2 ) cout << "YES";
	else cout << "NO";
	}
	cout << endl; 
	} 
}

