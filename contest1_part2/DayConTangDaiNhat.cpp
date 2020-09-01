#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int n;
	cin>>n;
	int a[n+5], f[n+5];
	int res=0;
	for( int i=0; i<n ;i++ ){
		cin>>a[i];
		f[i]=1;
		for( int j=0; j<i ;j++ ){
			if( f[j] + 1 > f[i] && a[i] > a[j] ) f[i] = f[j] + 1;
		}
		if( f[i] > res ) res = f[i];
	}
	cout<<res<<endl;
}

