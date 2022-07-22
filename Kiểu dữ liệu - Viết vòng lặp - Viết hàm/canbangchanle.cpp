#include<bits/stdc++.h>
using namespace std;
bool chanle(int n){
	int chan=0;
	int le =0;
	while (n>0){
		int c=n%10;
		if (c%2==0) chan++;
		else le++;
		n/=10;
	}
	if(le==chan) return true ;
	else return false ;
}
int main(){
    int n;
    cin >> n;
    int count=0;
    for(int i=pow(10,n-1);i<pow(10,n);i++){
    	if (chanle(i)){
		 count ++;
		 cout << i << " ";
		}
    	if (count%10==0) cout <<"\n";
	}
}

