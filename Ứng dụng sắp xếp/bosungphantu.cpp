#include<iostream>
using namespace std;
int MIN(int a[],int n){
	int min=a[0];
	for (int i=0;i<n;i++){
		if (min > a[i]) min = a[i];
	}
	return min;
}
int MAX(int a[],int n){
	int max=a[0];
	for (int i=0;i<n;i++){
		if (max < a[i]) max = a[i];
	}
	return max;
}
int main(){
	int t;
	cin >> t;
	while (t--){
	int n;
	cin >> n;
	int a[n];
	int h=0;
	int b[h];
	for (int i=0;i<n;i++){
		cin >> a[i];
	}
	int min=MIN(a,n);
	int max=MAX(a,n);
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (a[i]==a[j]) a[i]= 0;
			}
		}
	int count=0;
	for (int i=0;i<n;i++){
		if (a[i]>0) count++;
	}
	int len= max- min +1;
	cout << len - count <<endl;
}
}

