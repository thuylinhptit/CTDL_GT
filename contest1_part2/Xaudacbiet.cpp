#include<bits/stdc++.h>
using namespace std;
int n, k, stop, d=0,dem1, dem2;
char a[100000];
string in;
void init(){
	for( int i=0; i<n ;i++ ) a[i] = 'B';
}
void xuat(){
	for( int i=0; i<n ;i++){ 
		cout<<a[i];
	}
	cout<<endl;
}
bool test(){
	dem2=0;
	for( int i=0; i<n ;i++ ){
		dem1=0;
		if( a[i]=='A' ){
			dem1++;
			while( n>0 ){
				++i;
				if( a[i]=='A' ) dem1++;
				else if( a[i] == 'B') break;
			}
		}
		if( dem1==k ) dem2=1;
	}
	if( dem2 == 1 ) {
		return true;
		}
	return false;
}
void sinh(){
	int i=n-1;
	while( i>=0 && a[i]=='A' ){
		a[i]='B';
		i--;
	}
	if( i==-1 ) stop=1;
	else{
		a[i]='A';
	}
}
void ct(){
	stop=0;
	d=0;
	while(stop==0){
		sinh();
		if( test()==true){
			d++;
			for(int i=0; i<n ;i++) {
				in += a[i];
			}	
		}
	}
	int i=0;
	int j=0;
	cout<<d<<endl;
	while( in[i] != 0 ){
			cout<<in[i];
			i++;
			j++;
			if( j%n== 0 ) cout<<endl;
	}
}
int main ()
{
		cin>>n>>k;
		init();
		ct();
}
