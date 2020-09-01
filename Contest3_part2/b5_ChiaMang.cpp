#include<bits/stdc++.h>
#include<math.h>
#define ll long long
using namespace std;
int main (){
	int t;
	cin>>t;
	while( t-- ){
		int n, k;
		ll s=0, p=0;
		cin>>n>>k;
		int a[n];
		for( int i=0; i<n ; i++ ){
			cin>>a[i];
		}
		sort( a, a+n );
		k= min( n-k, k );
		s= accumulate(a, a+k, 0 );
		p= accumulate(a+k, a+n,0 );
		cout<<abs(s-p)<<endl;
	}
}

