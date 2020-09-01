#include<bits/stdc++.h>
using namespace std;
int n;
vector <string> a;
void handle(){
	a.push_back("0");
	a.push_back("1");
	for( int i=1; i<n; i++){
		for( int j=a.size()-1; j>=0; j--){
			a.push_back(a[j]);
		}
		for( int j=0; j<a.size()/2; j++ ){
			a[j]="0"+a[j];
		}
		for( int j=a.size()/2; j<a.size() ;j++ ){
			a[j]="1"+a[j];
		}
	}
	for( int i=0; i<a.size(); i++){
			cout<<a[i]<<' ';
	}
	a.clear();
}
int main ()
{
	int test;
	cin>>test;
	while( test-- ){
		cin>>n;
		handle();
		cout<<endl;
	}
}
