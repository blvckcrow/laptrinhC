#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Nhap n nguyen duong (1<=n<=30) : ";
	cin>>n;
	while(n<1||n>30){
		cout<<"Nhap lai n: ";
		cin>>n;
	}
	int a[n];
	for(int i=0;i<n;i++){
		cout<<"Nhap so thu "<<i+1<<": ";
		cin>>a[i];
	}
	cout<<"Cac so chia het cho 3 la: "<<endl;
	for(int i=0;i<n;i++){
		if(a[i]%3==0){
			cout<<a[i]<<" ";
		}
	}
	cout<<endl<<"Vi tri cua cac so chia het cho 3 lan luot la: "<<endl;
	for(int i=0;i<n;i++){
		if(a[i]%3==0){
			cout<<i+1<<" ";
		}
	}
	cout<<endl<<"Mang truoc khi sap xep: "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	int k=n/2;
	for(int i=0;i<k;i++){
		for(int j=i+1;j<k;j++){
			if(a[i]%2==0&&a[j]%2==0&&a[i]<a[j]){
				swap(a[i],a[j]);
			}
		}
	}
	for(int i=k;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]%2!=0&&a[j]%2!=0&&a[i]<a[j]){
				swap(a[i],a[j]);
			}
		}
	}
	cout<<endl<<"Mang sau khi sap xep: "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}