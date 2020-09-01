#include<bits/stdc++.h>
#define ll long long
using namespace std;
int cmp( int a, int b ){
	return a>b;
}
int main (){
	int t;
	cin>>t;
	while( t-- ){
		int n;
		cin>>n;
		int sum=0;
		int a[n], b[n];
		for( int i=0; i<n ; i++ ) cin>>a[i];
		for( int j=0; j<n ; j++ ) cin>>b[j];
		sort(a,a+n);
		sort(b,b+n,cmp);
		for( int i=0; i<n ;i++ ){
			sum+=a[i]*b[i];
		}
		cout<<sum<<endl;
	}
}

