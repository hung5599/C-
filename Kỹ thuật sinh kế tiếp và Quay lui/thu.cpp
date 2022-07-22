#include<iostream>
#include<math.h>
using namespace std;
int thoaman(int a[],int n){
    if (a[n-1]==0) return 0;
    else{
        for(int i=0;i<n-1;i++){
        if(a[i]==0&&a[i]==a[i+1]) {
            return 1;
            break;
        }
    }
    return 0;
    }
}
void gen(int A[], int n) {
    ++A[n - 1];
    for (int i = n - 1; i > 0; --i) {
        if (A[i] > 1) {
            ++A[i - 1];
            A[i] -= 2;
        }
    }
}
 
void xuat(int A[], int n) {
    for (int i = 0; i < n; i++){
        if(A[n-1]==1){
            cout << A[i];
        }
    }
    cout << "\n";
}
 
int main(){
    int n;
    cout << "Nhap n: ";
    cin >> n;
    //Khởi tạo mảng
    int *A = new int[n];
    int count = 0;
    //Xây dựng cấu hình đầu tiên
    for (int i = 0; i < n; i++) A[i] = 0;
    //In cấu hình hiện tại và xây dựng cấu hình kế tiếp
    for (int i = 0; i < pow(2, n); i++) {
        if(thoaman(A,n)) count ++;
        gen(A, n);
    }
    cout << count;
}