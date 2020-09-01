#include<bits/stdc++.h>
#define ll long long
#define F(i,a,b) for( int i=a; i<=b; i++ )
using namespace std;
int main (){
	int t;
	cin>>t;
	while( t-- ){
		int n;
		cin>>n;
		int kt=1;
		int d=n/7, m=n%7;
		if( m == 0 ){
			F(i,1,d) cout<<7;
			kt=0;
		}
		else if( n == 4 ) cout<<4;
		else{
			while(d){
				if( m%4 == 0 ) {
					kt=0;
					F(i,1,m/4) cout<<4;
					F(i,1,d) cout<<7;
					break;
				}
				else{
					d--;
					m+=7;
				}
			}
		}
		if( kt==1 ) cout<<"-1";
		cout<<endl;
	}
}

