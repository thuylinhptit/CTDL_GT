#include<bits/stdc++.h>
using namespace std;
int n,k;
int s;
bool stop;
int a[100];
void xuat(int i){
	
	cout<<"("<<a[1];
	if( i>1 ){
		for( int j=2; j<=i; j++) cout<<' '<<a[j];
	}
	cout<<") ";
}
void Try(int i){
	for( int j=a[i-1]; j>=1; j-- ){
		a[i]=j;
		s+=j;
		if( s>= n){
			if( s==n ){
			xuat(i);
		}
		}
		else{
			Try(i+1);
		}
		s-=j;
	}
}
int main ()
{
	int t;
	cin>>t;
	while( t-- ){
		s=0;
		cin>>n;
		a[0]=n+1;
		Try(1);
		cout<<endl;
	}
}
