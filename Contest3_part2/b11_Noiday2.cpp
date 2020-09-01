#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;
int main (){
	int n;
	cin>>n;
	int a[n];
	int sum=0;
	priority_queue < ll, vector<ll>, greater<ll> > q;
	for( int i=0; i<n ;i++ ){
		cin>>a[i];
		q.push(a[i]);
	}
	while( q.size() > 1 ){
		int a=q.top();
		q.pop();
		int b=q.top();
		q.pop();
		int c=( a%mod + b%mod)%mod;
		sum = (sum%mod + c%mod)%mod;
		q.push(c);
	}
	cout<<sum;
}

