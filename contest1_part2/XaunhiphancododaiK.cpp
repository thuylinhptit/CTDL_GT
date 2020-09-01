#include<bits/stdc++.h>
using namespace std;
int n, k, a[1000000], stop, d;
void init(){
	for( int i=0; i<n ;i++ ) a[i]=0;
}
void xuat(){
	for( int i=0; i<n ;i++){ 
		cout<<a[i];
	}
	cout<<endl;
}
bool test(){
	d=0;
	for( int i=n-1; i>=0; i-- ){
		if( a[i]==1 ) d++;
	}
	if( d==k ) return true;
	else return false;
}
void sinh(){
	int i=n-1;
	while( i>=0 && a[i]==1 ){
		a[i]=0;
		i--;
	}
	if( i==-1 ) stop=1;
	else{
		a[i]=1;
	}
}
int ct(){
	stop=0;
	while(stop==0){
		if( test()==true ) xuat();
		sinh();
	}
}
int main ()
{
	int t;
	cin>>t;
	while( t-- ){
		cin>>n>>k;
		init();
		ct();
	}
}
