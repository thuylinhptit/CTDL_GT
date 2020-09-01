#include<bits/stdc++.h>
#define ll long long

using namespace std;

bool check ( string a ){
	for( int i=0; i<a.size()/2; i++ ){
		if( a[i] != a[a.size()-i-1] ) return false;
	}
	return true;
}

void Handle( string a ){
	for( int i=a.size() ; i>=1; i--){
		for( int j=0; j<= a.size()-i; j++ ){
			string s = a.substr(j,i);
			if( check(s)==1 ) {
				cout<<i<<endl;
				return;
			}
		}
	}
} 
int main (){
	int t;
	cin>>t;
	while( t-- ){
		string a;
		cin>>a;
		Handle(a);
	}
}

