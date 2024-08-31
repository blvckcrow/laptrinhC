#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Nhap n (1<=n<=30): ";
	cin>>n;
	while(n<1||n>30){
		cout<<"Nhap lai n: ";
		cin>>n;
	}
	float a[n];
	for(int i=0;i<n;i++){
		cout<<"Nhap so thu "<<i+1<<": ";
		cin>>a[i];
	}
	cout<<"Cac so co tri tuyet doi lon hon 5 la: "<<endl;
	for(int i=0;i<n;i++){
		if(a[i]<0&&abs(a[i])>5){
			cout<<a[i]<<" ";
		}
	}
	float sum = 0;
	float dem = 0;
	for(int i=0;i<n;i++){
		if(a[i]<0&&abs(a[i])>5){
			sum+=a[i];
			dem++;
		}
	}
	cout<<endl<<"Trung binh cong cua cac so do = "<<sum/dem<<endl;
	int k;
	cout<<"Nhap vi tri k: ";
	cin>>k;
	while(k<1||k>n){
		cout<<"Nhap lai vi tri k: ";
		cin>>k;
	}
	cout<<"Mang truoc khi xoa: "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	n--;
	for(int i=k;i<n-1;i++){
		a[i]=a[i+1];
	}
	cout<<endl<<"Mang sau khi xoa: "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
}