#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	ll T;
	cin>>T;
	while( T-- ){
		string s;
		ll r=0;
		int check =0;
		cin>>s;
		ll d[26]={0};
		for( int i=0; i<s.size(); i++ ){
			d[s[i]-'a']++;
		}
		sort( d, d+26 );
		//geeksforgeeks
		//bbbbb
		if( s.size()%2 == 0 ){
			if( d[25] <= (s.size()/2) ) check=1;
			else check=0;
		}
		else if( s.size()%2 != 0 ){
			if( d[25] <= (s.size()/2 + 1) ) check=1;
			else check=0;
		}
		if( check == 1 ) cout<<"1"<<endl;
		else cout<<"-1"<<endl;
	}
}

