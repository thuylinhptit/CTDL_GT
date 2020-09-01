#include<bits/stdc++.h>
#include<math.h>
#define ll long long
using namespace std;
int main (){
	
	int T;
	cin>>T;
	while( T-- ){
		ll n,k;
		cin>>n>>k;
		ll s=0, p=0;
		ll a[n];
		for( ll i=0; i<n ;i++ ){
			cin>>a[i];
		}
		sort(a,a+n);
		k=min(k,n-k);
		s= accumulate(a,a+k,0);
		p= accumulate(a+k,a+n,0);
		cout<<abs(s-p)<<endl;
	}
}

