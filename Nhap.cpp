#include <iostream>
using namespace std;
int main(){
	int n;
	do{
		cin>>n;
		if(n<0) cout<<"Vui long nhap lai";
		else cout<<"Nhap thanh cong";
	}
	while(n<0);
}
