#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Nhap n nguyen duong (1<=n<=30): ";
	cin>>n;
	while(n<1||n>30){
		cout<<"Vui long nhap n nguyen duong (1<=n<=30): ";
		cin>>n;
	}
	int a[n];
	for(int i=0;i<n;i++){
		cout<<"Nhap so thu "<<i+1<<": ";
		cin>>a[i];
	}
	for(int i=0;i<n-2;i++){
	if(a[i]<a[i+1]){
			cout<<"Day so tang thuc su!"<<endl;
	}
	else if(a[i]<=a[i+1]){
			cout<<"Day so tang dan!"<<endl;
	}
	else if(a[i]>a[i+1]){
			cout<<"Day so giam thuc su!"<<endl;
	}
	else if(a[i]>=a[i+1]){
			cout<<"Day so giam dan"<<endl;
	}
	else{
			cout<<"Day so khong co trat tu nao!";
		}
	}
}