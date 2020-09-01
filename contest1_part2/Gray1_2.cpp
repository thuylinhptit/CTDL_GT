#include<bits/stdc++.h>
using namespace std;
int n;
void Handle(){
	int k=1;
	for( int i=1; i<=n ;i++ ) k*=2;
	string s[k+100];
	int d;
	s[1] = "0";
	s[2] = "1";
	if( n>1 ){
		d=2;
		for( int i=2; i<=n ;i++){
			int l=1;
			for( int j=1; j<=i; j++ ){
				l*=2;
			}
			for( int j=1; j<=d ;j++ ){
				s[l-j+1] = "1"+s[j];
				s[j] = "0" + s[j];
			}
			d=l;
		}
	}
	for( int i=1; i<=k ; i++ ){
		cout<<s[i]<<' ';
	}
	cout<<endl;
}
int main ()
{
	int t;
	cin>>t;
	while( t-- ){
		cin>>n;
		Handle();
	}
}
