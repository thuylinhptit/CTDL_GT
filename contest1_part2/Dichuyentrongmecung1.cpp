#include<bits/stdc++.h>
using namespace std;
int n, a[300][300];
int dd[300][300]={0};
vector<string> res;
int check=0;

void display(){
	for( int i=0; i<res.size(); i++ ){
		cout<<res[i];
	}
	cout<<" ";
}
void Try( int h, int c ){
	if( h==n && c==n ) {
		display();
		check=1;
		return;
	}
	if( h<n && a[h+1][c]==1 && dd[h+1][c]==0 ){
		res.push_back("D");
		dd[h+1][c]=1;
		Try(h+1, c);
		res.pop_back();
		dd[h+1][c]=0;
	}
	if( c<n && a[h][c+1]==1 && dd[h][c+1]==0 ){
		res.push_back("R");
		dd[h][c+1]=1;
		Try(h, c+1);
		res.pop_back();
		dd[h][c+1]=0;
	}
}
int main ()
{
	int t;
	cin>>t;
	while( t-- ){
		cin>>n;
		check=0;
		for( int i=1; i<=n ;i++ ){
			for( int j=1; j<=n ;j++ ){
				cin>>a[i][j];
			}
		}
		if( a[1][1]==0 || a[n][n]==0 ) {
			cout<<"-1"<<endl;
		}
		else{
			dd[1][1]=1;
			Try(1,1);
			if( check==0 ) cout<<"-1";
			cout<<endl;
		}
		
	}
}
