#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Nhap kich thuoc cua mang so nguyen: ";
	cin>>n;
	//khai bao mang
	int a[n];
	//nhap mang
	for(int i=0;i<n;i++){
		cout<<"a["<<i+1<<"] : ";
		cin>>a[i];
	}
	//xuat mang
	cout<<"Mang vua nhap la: "<<endl;
	for(int i=0;i<n;i++){
		cout<<" "<<a[i];
	}
	//duyet mang
	//gan min = phan tu dau tien
	int min=a[0];
	for(int i=0;i<n;i++){
		if(a[i]<min&&a[i]%2==0){
			min=a[i];
		}
	}
	cout<<endl<<"Phan tu chan nho nhat la: "<<min<<endl;
	//gan max = phan tu dau tien
	int max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			if(a[i]%2!=0&&a[i]>max){
				max=a[i];
			}
		}
	}
	cout<<"Phan tu le lon nhat la: "<<max<<endl;
	//duyet so nguyen to
	int dem=0;
	for(int i=0;i<n;i++){
	int x=a[i];
		for(int j=2;j<sqrt(x);j++){
			if(x%j!=0&&x>1){
				dem++;
			}
		}
	}
	cout<<"So phan tu la nguyen to: "<<dem<<endl;
	int tong=0;
	//duyet mang
	for(int i=0;i<n;i++){
		if(a[i]>=0&&sqrt(a[i])*sqrt(a[i])==a[i]){
			tong=tong+a[i];
		}
	}
	cout<<"Tong cac so chinh phuong trong mang: "<<tong<<endl;
	//mang sap xep
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				swap(a[i],a[j]);
			}
		}	
	}
	//xuat
	for(int i=0;i<n;i++){
		cout<<" "<<a[i];
	}
}