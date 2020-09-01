#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int t;
	cin>>t;
	while( t-- ){
		int n;
		cin>>n;
		int a[n+9];
		int b[n+9]={0};
		for( int i=1; i<=n-1; i++ ) cin>>a[i];
		for( int i=1; i<=n-1 ; i++ ) b[a[i]]=1;
		for( int i=1; i<=n; i++ ){
			if( b[i] == 0 ) {
				cout<<i<<endl;
				break;
			}
		}
		
	}
}

