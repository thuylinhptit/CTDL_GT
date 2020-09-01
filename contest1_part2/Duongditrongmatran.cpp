#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200][200];
int dd[200][200]={0};
int check=0;
int dem=0;
void Try( int h, int c ){
	if( h==n && c==m ){
		dem++;
		return;
	}
	if( dd[h+1][c]==0 && h<n ){
		dd[h+1][c]=1;
		Try(h+1,c);
		dd[h+1][c]=0;
	}
	if( dd[h][c+1]==0 && c<m ){
		dd[h][c+1]=1;
		Try(h,c+1);
		dd[h][c+1]=0;
	}
}
int main ()
{
	int t;
	cin>>t;
	while( t-- ){
		dem=0;
		cin>>n>>m;
		for( int i=1; i<=n ;i++ ){
			for( int j=1; j<=m ; j++ ){
				cin>>a[i][j];
			}
		}
		dd[1][1]=1;
		Try(1,1);
		cout<<dem<<endl;
		
	}
}
