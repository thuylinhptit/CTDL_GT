#include<bits/stdc++.h>
using namespace std;
int n, s,k;
int a[300];
int x[300];
vector< vector< int > > res;

void Try( int i ){
	for( int j=0; j<= 1; j++ ){
		a[i]=j;
		if( i == n ){
			s=0;
			for( int l=1; l<=n ;l++ ){
				if( a[l]==1 ){
					s+=x[l];
				}
			}
			if( s==k ){
				vector <int> v;
				for( int l=1; l<=n ;l++ ){
					if( a[l]==1 ) v.push_back(x[l]);
				}
				res.push_back(v);
			}
		}
		else Try(i+1);
	}
}

void xuat(){
	if( res.size()==0 ) cout<<"-1"<<endl;
	else{
		sort( res.begin(), res.end() );
		for( int i=0; i<res.size(); i++){
			cout<<"[";
			for( int j=0; j<res[i].size()-1; j++ ){
				cout<<res[i][j]<<' ';
			}
			cout<<res[i][res[i].size()-1]<<"] ";
		}
		cout<<endl;
	}
}
int main ()
{
	int t;
	cin>>t;
	while( t-- ){
		res.clear();
		cin>>n>>k;
		for( int i=1; i<=n ;i++ ){
			cin>>x[i];
		}
		sort( x+1, x+n+1 );
		Try(1);
		xuat();
	}
}
