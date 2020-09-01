#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int t;
	cin>>t;
	while( t-- ){
		int n;
		cin>>n;
		int a[n];
		int sum =0;
		priority_queue < ll, vector<ll> , greater <ll> > q;
		for( int i=0; i<n ; i++ ){
			cin>>a[i];
			q.push( a[i] );
		} 
		while( q.size() > 1 ){
			int a= q.top();
			q.pop();
			int b= q.top();
			q.pop();
			sum += (a+b);
			q.push(a+b); // push day moi vao
		}
		cout<<sum<<endl;
	}
}

