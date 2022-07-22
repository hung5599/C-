#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int a;
		long long b;
		int m=0;
		cin >> a >> b;
			for (int i=1;i<=a;i++){
				m+= i%b;
			}
		cout << m << endl;
}
}


