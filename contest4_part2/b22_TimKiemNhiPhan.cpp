#include<bits/stdc++.h>
#define ll long long
#define F(i,a,b) for( int i=a; i<=b ; i++ )
using namespace std;
int main ()
{
	int t;
	cin>>t;
	while( t-- ){
		int n,k;
		vector <ll> a;
		cin>>n>>k;
		int check=0;
		a.resize(n);
		F(i,0,n-1) cin>>a[i];
		int l=0, r=n-1, mid;
		while( l<=r ){
			mid=l+r>>1;
			if( a[mid] == k ) {
				check = 1;
				cout<<mid+1;
				break;
			}
			else if( a[mid] < k ){
				r=mid-1;
			}
			else{
				l=mid+1;
			}
		}
		if( check == 0 ) cout<<"NO";
		cout<<endl;
		
	}
}
