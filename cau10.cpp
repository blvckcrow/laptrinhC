#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[1000];
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
	//ham sap xep giam dan
	for(int i=0;i<dem;i++){
		for(int j=i+1;j<dem;j++){
			if(a[i]<a[j]){
				swap(a[i],a[j]);
			}
		}
	}
	cout<<endl<<"Day so a sau khi sap xep giam dan: "<<endl;
	for(int i=0;i<dem;i++){
		cout<<" "<<a[i];
	}
	
}