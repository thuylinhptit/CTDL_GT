#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int t;
	cin>>t;
	while( t-- ){
		int n,k,y;
		cin>>n>>k;
		int a[n+9];
		for( int i=0; i<n ; i++ ) {
			cin>>a[i];
			if( a[i] == k ) y=i+1;
		}
		cout<<y<<endl;
		
	}
}

