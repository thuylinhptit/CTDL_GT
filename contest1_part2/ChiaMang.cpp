#include<bits/stdc++.h>
using namespace std;
int n,k,s,sum=0;
int dem=0;
int a[100];
bool check=false;
int dd[100] = {0};
void Try( int sum, int dem ){
	if( sum==s ){
		dem++;
	}
	if( check==true ){
		return;
	}
	if( dem==k ){
		check=true;
		return;
	}
	for( int i=1; i<=n ;i++ ){
		if( dd[i]==0 ){
			dd[i]=1;
			if( sum==s ){
				Try(0,dem+1);
			}
			if( sum>s ) return;
			if( sum<s ) Try(sum+s, dem);
			
		}
	}
}
int main ()
{
	int t;
	cin>>t;
	while( t-- ){
		sum=0;
		cin>>n>>k;
		for( int i=1; i<=n ;i++ ){
			dd[i]=0;
			cin>>a[i];
			s+=a[i];
		}
		if( s%k != 0 )cout<<"0";
		else{
			s/=k;
			Try(0,0);
			if( check==true ) cout<<"1";
		} 
		cout<<endl;
	}
}
