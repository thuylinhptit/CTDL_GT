#include<bits/stdc++.h>
using namespace std;
int main ()
{
	string s;
	int t;
	cin>>t;
	while( t-- ){
		cin>>s;
		cout<<s[0];
		for( int i=1; i<s.size(); i++ ){
			if( s[i] != s[i-1] ) {
				s[i]='1';
				cout<<1;
			}
			else{
				s[i]='0';
				cout<<0;
			}
		}
		cout<<endl;
	} 
}
