#include<iostream>
#include<math.h>
int SNT(long long a){
	if (a==1) return 0;
	for (int i=2;i<=sqrt(a);i++){
		if(a%i==0) {
			return 0;
			break;
		}
	}
	return 1;
}
int main(){
	int n;
	std::cin >> n;
	while(n>0){
	long long b;
	std::cin >> b;
	int count=0;
	for (int i=1;i<=sqrt(b);i++){
		if(SNT(i)==1) count ++;  
	}
	std::cout << count << "\n" ;
	n--;
}
}



