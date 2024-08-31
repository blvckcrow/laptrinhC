#include<bits/stdc++.h>

using namespace std;

void nhap(int a[][100], int h, int c){
	for(int i = 0; i < h; i++){
		for(int j = 0; j < c; j++){
			cout<<"a["<<i<<"]["<<j<<"] = ";cin>> a[i][j];
		}
	}	
}
void xuat(int a[][100],int h,int c){
	for(int i = 0; i < h; i++){
		for(int j = 0; j < c; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
void sapxep(int a[][100],int h, int c){
	for(int i = 0; i < h;i++){
		sort(a[i], a[i]+c);
	}
}

void tong(int a[][100],int h, int c){
	int sum = 0;
	for(int i = 0; i < h; i++){
		for(int j = 0; j < c; j++){
			sum+= a[i][j];
		}
	}
	cout<<"Tong cac phan tu trong mang -> "<<sum;
}
int main(){
	int a[100][100];
	int h,c;
	cout<<"Nhap so hang : "; cin>>h;
	cout<<"Nhap so cot : ";cin>>c;
	nhap(a,h,c);
	cout<<"Mang vua nhap la: "<<endl;
	xuat(a,h,c); 
	sapxep(a,h,c);
	cout<<"Mang sau khi sap xep: "<<endl;
	xuat(a,h,c);
	tong(a,h,c);
	return 0;
}