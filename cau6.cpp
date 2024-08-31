 #include <bits/stdc++.h>
 using namespace std;
 int main(){
 	int n;
 	cout<<"Nhap n (1<=n<=30):  ";
 	cin>>n;
 	int n1=n;
 	while (n<1||n>30){
 		cout<<"Nhap lai n: ";
 		cin>>n;
	 }
	cout<<"Nhap cho day A: "<<endl;
 	float a[n],b[n1],c[n+n1];
 	for(int i=0;i<n;i++){
 		cout<<"Nhap phan tu thu "<<i+1<<" cua day a: ";
 		cin>>a[i];
	 }
	cout<<"Nhap cho day B: "<<endl;
	for(int i=0;i<n1;i++){
		cout<<"Nhap phan tu thu "<<i+1<<" cua day b: ";
 		cin>>b[i];
	}
	int tam=0;
	//them mang A vao mang C
	for(int i=0;i<n;i++){
		c[tam]=a[i];
		tam++;
	}
	//them mang B vao mang C
	for(int i=0;i<n1;i++){
		c[tam]=b[i];
		tam++;
	}
	//tron hai mang thanh mang C
	cout<<endl<<"Mang A: "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl<<"Mang B: "<<endl;
	for(int i=0;i<n1;i++){
		cout<<b[i]<<" ";
	}
	//xuat
	cout<<endl<<"Mang C sau khi ket hop hai mang A va B va chua xoa phan tu bang nhau: "<<endl;
	for(int i=0;i<n+n1;i++){
		cout<<c[i]<<" ";
	}
	//xoa phan tu co gia tri bang nhau trong mang C
	
	for(int i=0;i<n1;i++){
		if(b[i]==a[i]){
			for(int j=n1-1;j>=i;j++){
				b[i]=b[i-1];
			}
			n1--;
		}
		else{
		c[tam]=b[i];
		tam++;
		}
	}
	cout<<endl<<"Mang C sau khi xoa phan tu bang nhau: "<<endl;
	for(int i=0;i<n+n1;i++){
		cout<<c[i]<<" ";
	}
 }