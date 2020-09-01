#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
ll Handle(){
	cin>>n;
	queue<ll> q;
	q.push(9);
	if( 9%n == 0 ) {
		return 9;
	}
	while(1){
		ll m=q.front();
		q.pop();
		if( m%n == 0 ) return m;
		else{
			q.push( 10*m );
			q.push( 10*m+9 );
		}
	}
}
int main ()
{
	ll t;
	cin>>t;
	while( t-- ){
		cout<<Handle()<<endl;
	}
}
