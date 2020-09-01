#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,x;
const int N=1e6+10;
int a[N];
int b[N];

int main (){
	int t;
	cin>>t;
	while( t-- ){
		cin>>n>>x;
		for( int i=0; i<n ;i++ ) cin>>a[i];
		for( int i=0; i<=N ; i++ ) b[i]=-1;
		for( int i=0; i<n ; i++ ) b[a[i]] = 1;
		cout<<b[x]<<endl;
	}
}

