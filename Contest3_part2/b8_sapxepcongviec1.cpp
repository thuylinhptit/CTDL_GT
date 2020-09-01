#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct sapxep{
	int l;
	int r;
};

bool cmp( sapxep a, sapxep b ){
	return a.r < b.r;
}
int main (){
	int t;
	cin>>t;
	while( t-- ){
		int n;
		cin>>n;
		sapxep a[n+5];
		for( int i=0; i<n ;i++ ) cin>>a[i].l;
		for( int i=0; i<n ;i++ ) cin>>a[i].r;
		sort( a, a+n, cmp );
		int ans=1, tmp=0;
		for( int i=1; i<n ; i++ ){
			if( a[i].l >= a[tmp].r ){
				ans++;
				tmp=i;
			}
		}
		cout<<ans<<endl;
		
	}
}

