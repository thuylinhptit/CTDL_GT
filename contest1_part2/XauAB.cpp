#include<bits/stdc++.h>
using namespace std;
int n, stop=0;
char s[1000];
void khoitao(){
	for( int i=0; i<n; i++) s[i]='A';
}
void xuat(){
	for( int i=0; i<n ;i++) cout<<s[i];
	cout<<' ';
}
void sinh(){
	int i=n-1;
	while( i>=0 && s[i]=='B'){
		s[i]='A';
		i--;
	}
	if( i == -1 )  stop=1;
	else{
		s[i]='B';
	}
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
		cin>>n;
		khoitao();
		chuongtrinh();
		cout<<endl;
	}
}
