#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int n;
	cin>>n;
	int a[n];
	for( int i=0; i<n ; i++ ){
		cin>>a[i];
	}
	int step =1;
	for( int i=0; i<n-1 ;  i++ , step ++){
		int t=1e9, pos = 1;
		for( int j=i+1; j<n ;j++ ){
			if( a[i]>a[j] ) {
				t=a[j];
				pos=j;
			}
		}
		swap( a[i], a[pos]);
		cout<<"Buoc "<<step<<": ";
		for( int i=0; i<n ; i++ ) cout<< a[i]<<' ';
		cout<<endl;
	}
	
	
}

