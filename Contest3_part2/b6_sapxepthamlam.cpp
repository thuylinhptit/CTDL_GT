#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool check(int n, int a[], int cp[] ){
	for( int i=0; i<n ; i++ ){
		if( a[i] != cp[i] && a[n-i-1] != cp[i] ){
			return false;
		}
	}
	return true;
}
int main (){
	int t;
	cin>>t;
	while( t-- ){
		int n;
		cin>>n;
		int a[n];
		int cp[n];
		for( int i=0; i<n ; i++ ) cin>>a[i];
		copy(a,a+n,cp);
		sort(cp, cp+n);
		if( check(n,a,cp) == true ) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}

