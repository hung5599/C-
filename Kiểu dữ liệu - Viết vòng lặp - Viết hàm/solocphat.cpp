#include<iostream>
#include<math.h>
using namespace std;
int solp(int n){
	while (n>0){
		int m=n%10;
		if (m!=6&&m!=0&&m!=8) {
			return 0;
			break;
		}
		n/=10;
	}
	return 1;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int a;
		cin >> a;
		if (solp(a)) cout << "YES" << endl;
		else cout << "NO" << endl;	
}
}


