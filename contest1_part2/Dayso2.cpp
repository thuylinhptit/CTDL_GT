#include<bits/stdc++.h>
using namespace std;
int t, n, a[500][500],c[500][500];
void Handle(){
	for( int j=1; j<=n ;j++ ){
		cin>>a[1][j];
		
	}
	int cot=n-1;
	for( int i=2; i<=n ; i++ ){
		for( int j=1; j<=n ;j++ ){
			a[i][j]=a[i-1][j]+a[i-1][j+1];
			
		}
		cot--;
	}
	cot=1;
	for( int i=n; i>=1; i-- ){
		cout<<'[';
		for( int j=1; j<cot; j++ ){
			cout<<a[i][j]<<' ';
		}
		cout<<a[i][cot]<<']';
		cot++;
	}
	
}
int main ()
{
	cin>>t;
	while( t-- ){
		cin>>n;
		Handle();
		cout<<endl;
	}
}
