#include <iostream>
using namespace std;
int giaithua(int n){
	if(n<=1){
		return 1;
	}
	return n*giaithua(n-1);
}
int main(){
	int n=10;
	int k=8;
	while(n<0&&k<0){
		cout<<"nhap lai k"<<endl;
		cin>>k;
	}
	float tohopchap = giaithua(n)/(giaithua(k)*giaithua(n-k));
	cout<<"to hop chap k cua n la: "<<tohopchap;
}
