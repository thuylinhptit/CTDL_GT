#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int T;
	cin>>T;
	while( T-- ){
		ll n;
		ll sum=0;
		cin>>n;
		ll a[n+5];
		priority_queue< ll, vector <ll> , greater <ll> > q;
		for( int i=0; i<n ;i++ ){
			cin>>a[i];
			q.push(a[i]);
		}
		while( q.size() > 1 ){
			ll a1 = q.top();
			q.pop();
			ll a2 = q.top();
			q.pop();
			ll a3 = a1+a2;
			sum += a3;
			q.push(a3);
		}
		cout<<sum<<endl;
		
	}
}

