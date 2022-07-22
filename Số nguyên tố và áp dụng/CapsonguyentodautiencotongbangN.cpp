#include <iostream>
#include <math.h>
using namespace std;
int NT(int i){
	if(i<2) return 0;	
	else {
		for (int j=2;j<=sqrt(i);j++){
			if (i%j==0) return 0;
		}
		return 1;
	}
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int n,a,b;
		cin >> n;
		int tt=0;
		for (int i=2;i<=n/2;i++){
			if (NT(i)){
				int h= n-i;
				if (NT(h)) {
					tt++;
					a=i;
					b=h;
					break;
				}
			}
			
		}
		if (tt==1 )cout << a <<" "<< b ;
		else cout << "-1";
		cout << endl;
	}
}