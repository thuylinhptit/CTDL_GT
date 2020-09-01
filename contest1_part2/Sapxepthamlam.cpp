#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
int a[505];
int cp[505];
bool check(){
	for( int i=0; i<n ;i++ ){
		if( a[i] != cp[i] && a[n-1-i] != cp[i] ){
			return false;
		}
	}
	return true;
}
int main (){
	int T;
	cin>>T;
	while( T-- ){
		cin>>n;
		for( int i=0; i<n ;i++ ){
			cin>>a[i];
		}
		copy(a,a+n,cp);
		sort(cp, cp+n);
		if( check()==true ) cout<<"Yes";
		else cout<<"No";
		cout<<endl;
	}
}

