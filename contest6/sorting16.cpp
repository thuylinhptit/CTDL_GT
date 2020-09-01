#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N= 1e4+10;
int a[N];
int dd[N]={0};
int n;

bool cmp( int x, int y){
	if( dd[x] == dd[y] ) return ( x<y );
	else return ( dd[x] > dd[y] );
}

void init(){
	cin>>n;
	for(int i=0; i<n ; i++ ) cin>>a[i];
	memset(dd, 0, sizeof dd);
}

int main (){
	int t;
	cin>>t;
	while( t-- ){
		init();
		for( int i=0; i<n ; i++ ) dd[a[i]]++;
		sort(a,a+n,cmp);
		for( int i=0; i<n ; i++ ) cout<<a[i]<<" ";
		cout<<endl;
	}
}

