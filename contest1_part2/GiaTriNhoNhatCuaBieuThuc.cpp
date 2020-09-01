#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int T;
	int n;
	cin>>T;
	while( T-- ){
		cin>>n;
		ll sum=0;
		ll a[n], b[n];
		for(ll i=0; i<n ;i++ ){
			cin>>a[i];	
		}
		for(ll i=0; i<n ;i++ ){
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		reverse(b,b+n);
		for( ll i=0; i<n ;i++ ){
			sum+=a[i]*b[i];
		}
		cout<<sum<<endl;
		
	}
}

