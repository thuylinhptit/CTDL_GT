#include<bits/stdc++.h> 
#define ll long long 
using namespace std;
int n,a[20];

void Try(int a[],int n){
	if(n==1) return;
	int t[n+2];
	for(int i=1;i<n;i++){
		t[i]=a[i]+a[i+1];
	}
	Try(t,n-1);
	cout<<"[";
	for(int i=1;i<n;i++){
		t[i]=a[i]+a[i+1];
		cout<<t[i];
		if(i!=n-1) cout<<" ";
	}
	cout<<"]";
}

void Res(){
	cin>>n;
	int k=n;
	for( int i=1; i<=n ;i++ ) cin>>a[i];
	Try(a,n);
	cout<<"[";
	for( int i=1; i<k-1; i++ ) cout<<a[i]<<" ";
	cout<<a[k]<<"]\n";	
}
int main(){
	int test;
	cin>>test;
	while(test--){
		Res();
	}
}
