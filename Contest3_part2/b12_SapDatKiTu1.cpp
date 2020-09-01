#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	int t;
	cin>>t;
	while( t-- ){
		string s;
		cin>>s;
		int d[26]={0};
		int check = 0;
		for( int i=0; i<s.size(); i++ ){
			d[s[i]-'a'] ++;
		}
		sort( d, d+26);
		if( s.size() %2 == 0 ){
			if( d[25] <= s.size()/2 ) cout<<"1";
			else cout<<"-1";
		}
		else{
			if( d[25] <= s.size()/2 + 1 ) cout<<"1";
			else cout<<"-1";
		}
		cout<<endl;
	}
}

