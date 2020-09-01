#include<bits/stdc++.h>
#define ll long long
using namespace std;
pair < int, int > a[10005];

ll n,k;
bool cmp(pair < int, int > a, pair < int, int >b){
	if( abs( a.first -k ) == abs( b.first - k ) ) return a.second < b.second ;
	return ( abs( a.first - k) < abs( b.first -k ));
}
int main (){
	ll t;
	cin>>t;
	while( t-- ){
		cin>>n>>k;
		for( int i=0; i<n ; i++ ){
			cin>>a[i].first ;
			a[i].second = i;
		}
		sort( a, a+n, cmp );
		for( int i=0; i<n ; i++ ){
			cout<< a[i].first<<" ";
		}
		cout<<endl;
	}
}

