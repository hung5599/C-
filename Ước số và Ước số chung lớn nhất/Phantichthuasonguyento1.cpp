#include<iostream>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t>0){
    int n;
    cin >> n;
    for(int i=2;i<=n;i++){
    	if (n%i==0){
		int count=0;
    	cout << i << " ";
        while (n%i == 0  ) {
            count ++;
            n /= i;
        }
        cout << count <<" ";
	}
	}
    cout << "\n" ;
    t--;
	}
    return 0;
}

