#include<bits/stdc++.h>
using namespace std;
int n,k,sum,s;
int dem=0;
int a[100];
void Try(int i){
	for( int j= a[i-1]+1;j<=n-k+i; j++){
		a[i]=j;
		if( i==k ){
			sum=0;
			for( int l=1; l<=k; l++ ){
				sum+=a[l];
			}
			if( sum==s ){
				dem++;
			}
		}
		else{ 
			Try(i+1);
		}
	}
}
int main ()
{
	while(1){
		dem=0;
		cin>>n>>k>>s;
		for( int i=0; i<=10; i++){
			a[i]=0;
		}
		if( n==0 && k==0 && s==0 ) break;
		Try(1);
		cout<<dem;
		cout<<endl;
	}
}
