#include<bits/stdc++.h>

using namespace std;

const long long mod = 123456789;
long long Handle( long long a, long long b, long long mod ){
	long long r=1;
	while( b ){
		if( b%2 != 0 ){
			r = (r%mod * a% mod)%mod;
		}
		a = (a%mod*a%mod)%mod;
		b--;
	}
	return r;
}
int main (){
	long long t;
	cin>>t;
	while( t-- ){
		long long n;
		cin>>n;
		cout<<Handle(2,n-1,mod)<<endl;
	}
}

