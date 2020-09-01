#include<bits/stdc++.h>
#define ll long long
using namespace std;

void Handle( ll n, ll d ){
	if( n==0 || d==0 ) return;
	if( n%d == 0 ){
		cout<<n/d;
		return;
	}
	if( d%n == 0 ){
		cout<<"1/" <<d/n;
		return ;
	}
	if( n>d ){
		cout<<n/d<<" + ";
		Handle( n%d, d);
		return;
	}
	ll tmp = d/n+1;
	cout<<"1/"<< tmp << " + ";
	Handle( n*tmp-d, d*tmp );
}
int main (){
	int t;
	cin>>t;
	while( t-- ){
		ll n,d;
		cin>>n>>d;
		Handle(n,d);
		cout<<endl;
	}
}

