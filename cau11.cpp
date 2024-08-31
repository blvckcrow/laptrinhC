#include <bits/stdc++.h>
using namespace std;
int main(){
	float a[1000];
	int dem=0;
	for(int i=0;i<1000;i++){
		cout<<"Nhap so thu "<<i+1<<": ";
		cin>>a[i];
		if(a[i]==-1 || i==100){
		break;
		}
		dem++;
	}
	cout<<endl<<"So phan tu da duoc nhap la: "<<dem<<endl;
	cout<<"Day so a:"<<endl;
	for(int i=0;i<dem;i++){
		cout<<" "<<a[i];
	}
	//nhap x
	float x;
	cout<<endl<<"Nhap so thuc x: ";
	cin>>x;
	//check x
	int demx=0;
	for(int i=0;i<dem;i++){
		if(a[i]==x){
			demx++;
		}
	}
	cout<<endl<<"X xuat hien so lan la: "<<demx<<endl;
	cout<<"Cac vi tri X xuat hien lan luot la:"<<endl;
	for(int i=0;i<dem;i++){
		if(a[i]==x){
			cout<<i+1<<" ";
		}
	}
}