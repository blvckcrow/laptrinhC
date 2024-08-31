#include<bits/stdc++.h>

using namespace std;

void nhap(string a[] , int n){
	for(int i = 0; i< n;i++){
		cout<<"xau ki tu "<<i+1<<": ";
		fflush(stdin);
		getline(cin,a[i]);
	}
}
void xuat(string a[], int n){
	for(int i = 0 ; i < n;i++){
		cout<<a[i]<<endl;
	}
}
bool doixung(string s)
{
    for (int i=0; i<=s.length()/2; i++)
        if (s[i]!=s[s.length()-i-1])
            return 0;
    return 1;
}
void kiemtra(string a[], int n){
	for(int i = 0;i<n ;i++){
		if(doixung(a[i]) == 1){
			cout<<a[i]<<endl;
		}
	}	
}
int main(){
	int n;
	cout<<"Nhap so luong ki tu : ";cin>>n;
	while(n<=0||n>50){
		cout<<"So luong ki tu trong khoang (0;50] : ";cin>>n;
	}
	string a[n];
	nhap(a,n);
	cout<<"\nChuoi xau ki tu vua nhap la: "<<endl;
	xuat(a,n);
	cout<<"\nXau ki tu doi xung la: "<<endl;
	kiemtra(a,n);
}