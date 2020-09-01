#include<bits/stdc++.h>
using namespace std;
int n,k,stop=0;
int main ()
{
	int t;
	cin>>t;
	while( t-- ){
		int s=0;
		cin>>n>>k;
		int a[500];
		int dd[500]={0};
		for( int i=1; i<=k ;i++ ){
			cin>>a[i];
			dd[a[i]]=1;
		}
		int i=k;
		while( a[i] ==  n-k+i) i--;
		if( i <= 0 ) cout<<k<<endl;
		else  {
			a[i]++;
			int p=a[i];
			while ( i<=k ) a[i++]=p++;	
			for( int j=i+1; j<=k;j++ ){
				a[j]=a[j-1]+1;
			}
			for( int j=1; j<=k ;j++ ){
				dd[a[j]]=0;
			}
			for( int j=1; j<=40; j++){
				if( dd[j] == 1 ) s++;
			}
			cout<<s<<endl;
		}	
	}
	return 0;
}
