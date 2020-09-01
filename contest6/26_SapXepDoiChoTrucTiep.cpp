#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int n;
	cin>>n;
	int a[n];
	int step = 1;
	for( int i=0; i<n ;i++ ) cin>> a[i];
	for( int i=0; i<n-1 ; i++, step++){
		for( int j=i+1; j<n ; j++ ){
			if( a[i]>a[j] ) swap( a[i], a[j] );
		}
		cout<<"Buoc "<<step<<": ";
		for( int i=0; i<n ; i++ ){
			cout<<a[i]<<' ';
		}
		cout<<endl;
	}
	
}

