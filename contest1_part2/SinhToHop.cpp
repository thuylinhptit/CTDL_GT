#include<bits/stdc++.h>
using namespace std;
int n, k, a[10000];
int stop=0;
void khoitao(){
	for( int i=1; i<=k; i++ ) a[i]=i;
}
void xuat(){
	for( int i=1; i<=k; i++ ) cout<<a[i];
	cout<<' ';
}
void sinh(){
	int i=k;
	while( a[i] ==  n-k+i) i--;
	if( i == 0 ) stop=1;
	else  a[i]++;
	int p=a[i];
	while ( i<=k ) a[i++]=p++;
}
void chuongtrinh(){
	stop=0;
	while( stop == 0 ){
		xuat();
		sinh();
		
	}
}
int main ()
{
	int test;
	cin>>test;
	while( test-- ){
		cin>>n>>k;
		khoitao();
		chuongtrinh();
		cout<<endl;
	}
}
