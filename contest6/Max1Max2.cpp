#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int t;
	cin>>t;
	while( t-- ){
		int n;
		cin>>n;
		int check = 0;
		int a[n];
		for( int i=0; i<n; i++ ) cin>>a[i];
		sort( a, a+n);
		int t=a[0];
		for( int i=1; i<n ; i++ ){
			if( t != a[i] ){
				check = 1;
				cout<<t << ' '<< a[i] << endl;
				break;
			}
			
		}
		if( check == 0 ) cout<<"-1"<<endl;
		
	}
}

