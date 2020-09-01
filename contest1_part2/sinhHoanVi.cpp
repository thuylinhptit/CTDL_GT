#include<bits/stdc++.h>
using namespace std;
int n, stop=0;
int a[10000];
void khoitao(){
	for( int i=1; i<=n ;i++) a[i]=i;
}
void xuat(){
	for( int i=1; i<=n ;i++ ) cout<<a[i];
	cout<<' ';
}
void sinh(){
	int i=n-1;
	while( i>=0 && a[i]>a[i+1] ){
		i--;
	}
	if( i==0 ) stop=1;
	else{
		int k=n;
		while( a[i]>a[k] ) k--;
		swap( a[i], a[k] );
		int c=n, r=i+1;
		while( r<c ){
			swap( a[r], a[c] );
			r++;
			c--;
		}
	}
}
void chuongtrinh(){
	stop=0;
	do{
		xuat();
		sinh();
	}while( stop==0 );
}
int main (){
	int t;
	cin>>t;
	while( t-- ){
		cin>>n;
		khoitao();
		chuongtrinh();
		cout<<endl;
	}
}
