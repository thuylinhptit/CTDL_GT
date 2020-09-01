#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n, a[1000001], stop;

void init(){
	for( int i=0; i<n ; i++ ) a[i] = 0;
}

void xuat(){
	for( int i=0; i<n; i++ ){
		cout<<a[i];
	}
	cout<<endl;
}
bool check(){
	int d=0;
	for( int i=n-1; i>=0; i-- ){
		if( a[i] ==1 ) d++;
	}
	if( d==n ) return true;
	return false;
}
void sinh(){
	int i=n-1;
	while( i>=0 && a[i] == 1 ){
		a[i] = 0;
		i--;
	}
	if( i==-1 ) stop = 1;
	else{
		a[i] = 1;
	}
}

void ct(){
	stop=0;
	while( stop == 0 ){
		xuat();
		sinh();
	}
}
int main (){
	cin>>n;
	init();
	ct();
}

