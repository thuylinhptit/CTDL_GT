#include<stdio.h>
int n,a[1000];
void init(){
	for( int i=0; i<n ;i++ )
	{
		scanf("%d",&a[i])
	}
}
void display(){
	for( int i=0; i<n ;i++ )
	{
		print("%d ",a[i]);
	}
}
void Swap(){
	sort( a,a+n );
}

void main ()
{
	cout<<"Nhap vao so n: ";
	cin>>n;
	cout<<"Nhap cac gia tri cua mang: ";
	init();
	cout<<endl;
	cout<<"Mang ban dau la: \n";
	display();
	cout<<endl;
	Swap();
	cout<<"Mang sau khi sap xep la: \n";
	display();
}

