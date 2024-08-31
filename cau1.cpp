#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Nhap n nguyen duong (1<=n<=30): ";
	cin>>n;
	while(n<1||n>30){
		cout<<"Nhap lai n nguyen duong: ";
		cin>>n;
	}
	int a[n];
	for(int i=0;i<n;i++){
		if(i>=2){
		a[i]=a[i-1]+a[i-2];
		}
		else{
			a[i]=1;
		}
	}
	cout<<"Hien thi mang: "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	cout<<endl<<"Tong tat ca so trong day la: "<<sum<<endl;
}