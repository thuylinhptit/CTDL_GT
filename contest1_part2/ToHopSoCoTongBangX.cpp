#include<bits/stdc++.h>
using namespace std;
int n, sum;
int a[200];
vector<int>v;
int check=0;
void display(){
	cout<<"[";
	for( int i=0; i<v.size()-1 ;i++ ){
		cout<<v[i]<<' ';
	}
	cout<<v[v.size()-1]<<"]"<<' ';
}
void Try( int i, int sum ){
	if( sum<0 ) return;
	if( sum==0 ){
		check=1;
		display();
	}
	while( i<=n && sum-a[i]>=0 ){
		v.push_back(a[i]);
		Try(i,sum-a[i]);
		i++;
		v.pop_back();
	}
}

int main ()
{
	int t;
	cin>>t;
	while( t-- ){
		check = 0;
		cin>>n>>sum;
		for( int i=1; i<=n ;i++ ) cin>>a[i];
		Try(1,sum);
		if( check==0 ) cout<<"-1";
		cout<<endl;
	}
}
